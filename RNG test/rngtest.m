:- module rngtest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, time, string.
:- import_module list.
:- import_module random.sfc32.

main(!IO) :-
    SeedInt = 12345,
    R0 = sfc32.init(int.to_uint(SeedInt)),

    % Generate a random number in the range 1 to 10
    sfc32.uniform_int_in_range(1, 10, Number, R0, _),

    % Print the random number
    io.format("Your random number is: %d\n", [i(Number)], !IO).