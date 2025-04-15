:- module rngtest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, time, string.
:- import_module list.
:- import_module random.
:- import_module random.sfc32.

main(!IO) :-
    SeedInt = 12345,
    sfc32.init(SeedInt, R0),

    % Generate a random number in the range 1 to 10
    uniform_int_in_range(1, 10, Number, R0, _),

    % Print the random number
    io.format("Your random number is: %d\n", [i(Number)], !IO).