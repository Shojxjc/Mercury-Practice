%--------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%--------------------------------------------------%
% Copyright (C) 1994-1998,2001-2006, 2011 The University of Melbourne.
% Copyright (C) 2015-2016, 2018-2023 The Mercury team.
% This file is distributed under the terms specified in COPYING.LIB.
%--------------------------------------------------%
%
% File: random.m
% Main author: Mark Brown
%
% This module provides interfaces to several random number generators,
% implementations of which can be found in the submodules.
%
% The interfaces can be used in three styles:
%
%   - In the "ground" or "shared" style, an instance of the random/1
%   typeclass is passed through the code using 'in' and 'out' modes. This
%   value is used to generate random numbers, and since the value is
%   ground it can also easily be stored in larger data structures. The
%   major drawback of this style is that the generators tend to be either
%   fast or of good quality, but not both.
%
%   - In the "unique" style, the urandom/2 typeclass is used instead. Each
%   instance consists of a "params" type which is passed into the code
%   using an 'in' mode, and a "state" type which is passed through the
%   code using modes 'di' and 'uo'. The uniqueness allows destructive
%   update, which means that these generators can be both fast and good.
%
%   - A generator can be attached to the I/O state. In this case, the
%   interface is the same as the unique style, with 'io' being used as
%   the unique state. This is particularly convenient for use in code
%   where the I/O state is already being passed around.
%
% Each generator defined in the submodules is natively one of the first
% two styles. Adaptors are defined below for converting between these,
% or from either of these to the third style.
%
%
% Example, ground style:
%
%   main(!IO) :-
%       R0 = sfc16.init,
%       roll(R0, R1, !IO),
%       roll(R1, _, !IO).
%
%   :- pred roll(R::in, R::out, io::di, io::uo) is det <= random(R).
%
%   roll(!R, !IO) :-
%       uniform_int_in_range(1, 6, N, !R),
%       io.format("You rolled a %d\n", [i(N)], !IO).
%
%
% Example, unique style:
%
%   main(!IO) :-
%       sfc64.init(P, S0),
%       roll(P, S0, S1, !IO),
%       roll(P, S1, _, !IO).
%
%   :- pred roll(P::in, S::di, S::uo, io::di, io::uo) is det <= urandom(P, S).
%
%   roll(P, !S, !IO) :-
%       uniform_int_in_range(P, 1, 6, N, !S),
%       io.format("You rolled a %d\n", [i(N)], !IO).
%
%
% Example, attached to I/O state:
%
%   main(!IO) :-
%       % Using a ground generator.
%       R = sfc16.init,
%       make_io_random(R, M1, !IO),
%       roll(M1, !IO),
%       roll(M1, !IO),
%
%       % Using a unique generator.
%       sfc64.init(P, S),
%       make_io_urandom(P, S, M2, !IO),
%       roll(M2, !IO),
%       roll(M2, !IO).
%
%   :- pred roll(M::in, io::di, io::uo) is det <= urandom(M, io).
%
%   roll(M, !IO) :-
%       uniform_int_in_range(M, 1, 6, N, !IO),
%       io.format("You rolled a %d\n", [i(N)], !IO).
%
%
% Notes for RNG implementors:
%
% To implement a random number generator library using the interface
% defined in this module, an instance must be created for either the
% random/1 typeclass or the urandom/2 typeclass. The choice depends on
% whether or not the implementation destructively updates its state.
% For implementations that do destructively update their state, the
% urandom/2 typeclass should be used as it provides the necessary
% unique modes.
%
% For most RNGs, destructive update is desirable since the state can be
% quite large and it would be expensive to make a copy of the state for
% each number generated. Destructive update is often achieved with the
% use of arrays, hence array-based implementations typically require
% the use of urandom/2. The compiler doesn't properly enforce this,
% however - see the warning at the start of array.m - so some care is
% required. The sfc32 and sfc64 submodules demonstrate the use of arrays
% for the generator state.
%
% In some cases it may be acceptable to implement only the shared
% interface, for example if the state is small. The sfc16 submodule
% provides an example of this.
%
% Generally, it is sufficient to provide an implementation for only
% one of the above two typeclasses. As mentioned earlier, users can
% create instances of other typeclasses using the following predicates
% in this module:
%
%   make_urandom/3
%   make_io_random/4
%   make_io_urandom/5
%
% If an implementation of urandom_dup/1 is also provided, then the
% function make_shared_random/2 can be used to make a shared version
% which will copy the state after each call. Care should be taken with
% this, however, as users may unintentionally consume large amounts of
% memory with its use.
%
% Further implementation examples can be found in the extras/random
% directory.
%
%--------------------------------------------------%
%--------------------------------------------------%

:- module random.
:- interface.

:- include_module sfc16.
:- include_module sfc32.
:- include_module sfc64.
:- include_module system_rng.

:- import_module array.
:- import_module io.
:- import_module list.

%--------------------------------------------------%

    % Interface to random number generators.
    %
:- typeclass random(R) where [

        % Generate a uniformly distributed pseudo-random unsigned integer
        % of 8, 16, 32 or 64 bits, respectively.
        %
    pred generate_uint8(uint8::out, R::in, R::out) is det,
    pred generate_uint16(uint16::out, R::in, R::out) is det,
    pred generate_uint32(uint32::out, R::in, R::out) is det,
    pred generate_uint64(uint64::out, R::in, R::out) is det

].

    % uniform_int_in_range(Start, Range, N, !R)
    %
    % Generate a pseudo-random integer that is uniformly distributed
    % in the range Start to (Start + Range - 1), inclusive.
    %
    % Throws an exception if Range < 1 or Range > uint32_max.
    %
:- pred uniform_int_in_range(int::in, int::in, int::out, R::in, R::out)
    is det <= random(R).

    % uniform_uint_in_range(Start, Range, N, !R)
    %
    % Generate a pseudo-random unsigned integer that is uniformly
    % distributed in the range Start to (Start + Range - 1), inclusive.
    %
    % Throws an exception if Range < 1 or Range > uint32_max.
    %
:- pred uniform_uint_in_range(uint::in, uint::in, uint::out, R::in, R::out)
    is det <= random(R).

    % uniform_float_in_range(Start, Range, N, !R)
    %
    % Generate a pseudo-random float that is uniformly distributed
    % in the interval [Start, Start + Range).
    %
:- pred uniform_float_in_range(float::in, float::in, float::out, R::in, R::out)
    is det <= random(R).

    % uniform_float_around_mid(Mid, Delta, N, !R)
    %
    % Generate a pseudo-random float that is uniformly distributed
    % in the interval (Mid - Delta, Mid + Delta).
    %
:- pred uniform_float_around_mid(float::in, float::in, float::out,
    R::in, R::out) is det <= random(R).

    % uniform_float_in_01(N, !R)
    %
    % Generate a pseudo-random float that is uniformly distributed
    % in the interval [0.0, 1.0).
    %
:- pred uniform_float_in_01(float::out, R::in, R::out) is det <= random(R).

    % normal_floats(M, SD, U, V, !R)
    %
    % Generate two pseudo-random floats from a normal (i.e., Gaussian)
    % distribution with mean M and standard deviation SD, using the
    % Box-Muller method.
    %
    % We generate two at a time for efficiency; they are independent of
    % each other.
    %
:- pred normal_floats(float::in, float::in, float::out, float::out,
    R::in, R::out) is det <= random(R).

    % normal_floats(U, V, !R)
    %
    % Generate two pseudo-random floats from a normal (i.e., Gaussian)
    % distribution with mean 0.0 and standard deviation 1.0, using the
    % Nox-Muller method.
    %
    % We generate two at a time for efficiency; they are independent of
    % each other.
    %
:- pred normal_floats(float::out, float::out, R::in, R::out) is det
    <= random(R).

    % Generate a random permutation of a list.
    %
:- pred shuffle_list(list(T)::in, list(T)::out, R::in, R::out) is det
    <= random(R).

    % Generate a random permutation of an array.
    %
:- pred shuffle_array(array(T)::array_di, array(T)::array_uo, R::in, R::out)
    is det <= random(R).

%--------------------------------------------------%

    % Interface to unique random number generators. Callers need to
    % ensure they preserve the uniqueness of the random state, and in
    % turn instances can use destructive update on it.
    %
:- typeclass urandom(P, S) <= (P -> S) where [

        % Generate a uniformly distributed pseudo-random unsigned integer
        % of 8, 16, 32 or 64 bits, respectively.
        %
    pred generate_uint8(P::in, uint8::out, S::di, S::uo) is det,
    pred generate_uint16(P::in, uint16::out, S::di, S::uo) is det,
    pred generate_uint32(P::in, uint32::out, S::di, S::uo) is det,
    pred generate_uint64(P::in, uint64::out, S::di, S::uo) is det

].

:- typeclass urandom_dup(S) where [

        % urandom_dup(!S, !:Sdup)
        %
        % Create a duplicate random state that will generate the same
        % sequence of integers.
        %
    pred urandom_dup(S::di, S::uo, S::uo) is det

].

    % uniform_int_in_range(P, Start, Range, N, !S)
    %
    % Generate a pseudo-random integer that is uniformly distributed
    % in the range Start to (Start + Range - 1), inclusive.
    %
    % Throws an exception if Range < 1 or Range > uint32_max.
    %
:- pred uniform_int_in_range(P::in, int::in, int::in, int::out, S::di, S::uo)
    is det <= urandom(P, S).

    % uniform_uint_in_range(P, Start, Range, N, !S)
    %
    % Generate a pseudo-random unsigned integer that is uniformly
    % distributed in the range Start to (Start + Range - 1), inclusive.
    %
    % Throws an exception if Range < 1 or Range > uint32_max.
    %
:- pred uniform_uint_in_range(P::in, uint::in, uint::in, uint::out,
    S::di, S::uo) is det <= urandom(P, S).

    % uniform_float_in_range(P, Start, Range, N, !S)
    %
    % Generate a pseudo-random float that is uniformly distributed
    % in the interval [Start, Start + Range).
    %
:- pred uniform_float_in_range(P::in, float::in, float::in, float::out,
    S::di, S::uo) is det <= urandom(P, S).

    % uniform_float_around_mid(P, Mid, Delta, N, !S)
    %
    % Generate a pseudo-random float that is uniformly distributed
    % in the interval (Mid - Delta, Mid + Delta).
    %
:- pred uniform_float_around_mid(P::in, float::in, float::in, float::out,
    S::di, S::uo) is det <= urandom(P, S).

    % uniform_float_in_01(P, N, !S)
    %
    % Generate a pseudo-random float that is uniformly distributed
    % in the interval [0.0, 1.0).
    %
:- pred uniform_float_in_01(P::in, float::out, S::di, S::uo) is det
    <= urandom(P, S).

    % normal_floats(P, M, S, U, V, !S)
    %
    % Generate two pseudo-random floats from a normal (i.e., Gaussian)
    % distribution with mean M and standard deviation S, using the
    % Box-Muller method.
    %
    % We generate two at a time for efficiency; they are independent of
    % each other.
    %
:- pred normal_floats(P::in, float::in, float::in, float::out, float::out,
    S::di, S::uo) is det <= urandom(P, S).

    % normal_floats(P, U, V, !S)
    %
    % Generate two pseudo-random floats from a normal (i.e., Gaussian)
    % distribution with mean 0.0 and standard deviation 1.0, using the
    % Box-Muller method.
    %
    % We generate two at a time for efficiency; they are independent of
    % each other.
    %
:- pred normal_floats(P::in, float::out, float::out, S::di, S::uo) is det
    <= urandom(P, S).

    % Generate a random permutation of a list.
    %
:- pred shuffle_list(P::in, list(T)::in, list(T)::out, S::di, S::uo) is det
    <= urandom(P, S).

    % Generate a random permutation of an array.
    %
:- pred shuffle_array(P::in, array(T)::array_di, array(T)::array_uo,
    S::di, S::uo) is det <= urandom(P, S).

%--------------------------------------------------%
%--------------------------------------------------%

    % Convert any instance of random/1 into an instance of urandom/2.
    % This creates additional overhead in the form of additional
    % typeclass method calls.
    %
:- type urandom_params(R).
:- type urandom_state(R).

:- instance urandom(urandom_params(R), urandom_state(R)) <= random(R).
:- instance urandom_dup(urandom_state(R)) <= random(R).

:- pred make_urandom(R::in, urandom_params(R)::out, urandom_state(R)::uo)
    is det.

%--------------------------------------------------%

    % Convert any instance of urandom/2 and urandom_dup/1 into an
    % instance of random/1. This duplicates the state every time a
    % random number is generated, hence may use significantly more
    % memory than if the unique version were used directly.
    %
:- type shared_random(P, S).

:- instance random(shared_random(P, S)) <= (urandom(P, S), urandom_dup(S)).

:- func make_shared_random(P::in, S::di) = (shared_random(P, S)::out) is det.

%--------------------------------------------------%

    % Convert any instance of random/1 into an instance of urandom/2
    % where the state is the I/O state.
    %
:- type io_random(R).

:- instance urandom(io_random(R), io) <= random(R).

:- pred make_io_random(R::in, io_random(R)::out, io::di, io::uo) is det
    <= random(R).

%--------------------------------------------------%

    % Convert any instance of urandom/2 into an instance of urandom/2
    % where the state is the I/O state.
    %
:- type io_urandom(P, S).

:- instance urandom(io_urandom(P, S), io) <= urandom(P, S).

:- pred make_io_urandom(P::in, S::di, io_urandom(P, S)::out, io::di, io::uo)
    is det <= urandom(P, S).

%--------------------------------------------------%
%--------------------------------------------------%