:- module hellotest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module string.

main(!IO) :-
    io.write_string("Lets go Gambling!!!!!!! \n", !IO),
    io.write_string("Call me a good boy first though \n", !IO),
    Lookforthis = "Good Boy",
    io.read_line_as_string(User, !IO),
    (
        User = ok(Line),
        (
        string.equals(string.strip(Line), Lookforthis)
        ->
            io.write_string("Omg im gonna ferk \n", !IO)
        ;
            io.write_string("Yous a bitch", !IO)
        )
    ;
        User = eof,
        io.write_string("Say something please \n", !IO)
    ;
        User = error(_),
        io.write_string("oopsie", !IO)
    ),

    S1 = "ferker i hardly know her",
    io.write_string(S1 ++ "\n", !IO).
