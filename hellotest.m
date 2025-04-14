:- module hellotest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module string.

main(!IO) :-
    S1 = "ferker i hardly know her"
    io.write_string(S1 ++ "\n", !IO)
