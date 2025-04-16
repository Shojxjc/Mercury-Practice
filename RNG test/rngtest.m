:- module rngtest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, random, string.

main(!IO) :-
    % Seed the random number generator using a fixed seed (or use time for variability)
    random.init(12345, RNG0),

    % Generate a random float between 0.0 and 1.0
    random.random(RFloat, RNG0, RNG1),

    % Scale it to the desired integer range (e.g., 1 to 10)
    Number = 1 + int.truncate(RFloat * 10.0),

    io.format("Your random number is: %d\n", [i(Number)], !IO).