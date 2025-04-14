:- module hellotest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module string.

main(!IO) :-
    i0.write_string("Lets go Gambling!!!!!!! \n", !IO),
    i0.write_string("Call me a good boy first though \n", !IO),
    Lookforthis = "Good Boy",
    io.read_line_as_string(User, !IO),
    (
        User = ok(Line),
        string.equals(User, Lookforthis)
        ->
            i0.write_string("Omg im gonna ferk \n")
        ;
            i0.write_string("Yous a bitch")
    ;
        User = eof,
        i0.write_string("Say something please \n")
    ;
        User = error_(_),
        i0.write_string("oopsie")
    ),

    S1 = "ferker i hardly know her",
    io.write_string(S1 ++ "\n", !IO).
