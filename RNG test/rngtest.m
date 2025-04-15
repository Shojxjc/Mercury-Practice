:- module rngtest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, random, time, string.
:- include_module sfc32.

:- pred uniform_int_in_range(int::in, int::in, int::out, R::in, R::out)
    is det <= random(R).
    
    Seed = 12345,

    % Use sfc32 random number generator and initialize it with the seed
    sfc32.init(Seed, R0),

    % Generate a random number in the range 1 to 10
    uniform_int_in_range(1, 10, Number, R0, _),

    % Print the random number
    io.format("Your random number is: %d\n", [i(Number)], !IO).