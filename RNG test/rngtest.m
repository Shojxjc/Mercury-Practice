:- module rngtest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, time, string.
:- import_module list.
:- import_module random.

main(!IO) :-
    R = sfc16.init,
    make_io_random(R, M1, !IO),
    roll(M1, !IO),
    roll(M1, !IO),

    :- pred roll(M::in, io::di, io::uo) is det <= urandom(M, io).

    roll(M, !IO) :-
    uniform_int_in_range(M, 1, 6, N, !IO),
    io.format("You rolled a %d\n", [i(N)], !IO).
