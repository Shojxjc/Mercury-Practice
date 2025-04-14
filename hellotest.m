:- module hellotest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module string.

main(!IO) :-
    s1 = "ferker i hardly know her"
    io.write_string(s1 ++ "/n", !IO).
