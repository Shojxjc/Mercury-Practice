:- module RNGtest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, random, time.
:- include_module sfc16.
:- include_module sfc32.
:- include_module sfc64.
:- include_module system_rng.
:- import_module array.
:- import_module io.
:- import_module list.

:- pred uniform_int_in_range(int::in, int::in, int::out, R::in, R::out)
    is det <= random(R).

main(!IO) :-
    random.init(Seed, !R),
    uniform_int_in_range(1, 10, Ksi, !R),
    io.format("Your random number is: %d\n", [i(Ksi)], !IO).


