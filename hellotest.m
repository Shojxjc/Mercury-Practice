:- module hellotest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module string.
:- import_module random.
:- import_module int.

main(!IO) :-
    random.init_state(12345, State), % You can change this seed for different results

    loop(1, 5, !IO),
    io.write_string("Lets go Gambling!!!!!!! \n", !IO),
    io.write_string("Call me a good boy first though \n", !IO),
    io.write_string("\n", !IO),
    Lookforthis = "Good Boy",
    io.read_line_as_string(User, !IO),
    (
        User = ok(Line),
        Input = string.strip(Line),
        (
        Input = Lookforthis
        ->
            io.write_string("Omg im gonna ferk \n", !IO)
        ;
            io.write_string("Meanie \n", !IO),
            io.set_exit_status(1, !IO)
        )
    ;
        User = eof,
        io.write_string("What are you ignoring me \n", !IO),
        io.set_exit_status(1, !IO)
    ;
        User = error(_),
        io.write_string("oopsie \n", !IO),
        io.set_exit_status(1, !IO)
    ),
    io.write_string("\n Lets play guess the number \n Im thinking of number between 1 - 10", !IO),
    random.int(State, 10, ProgNum, NewState),
    io.read_line_as_string(UNum, !IO),
    (
        UNum = ok(Sinep),
        Vinny = string.strip(Sinep),
        string.to_int(Vinny, GAM),
        (
        GAM = ProgNum
        ->
            io.write_string("Holy shit you got it write\n", !IO)
        ;
            io.write_string("Lmao Type shit \n", !IO),
            io.set_exit_status(1, !IO)
        )
    ;
        UNum = eof,
        io.write_string("What are you ignoring me \n", !IO),
        io.set_exit_status(1, !IO)
    ;
        UNum = error(_),
        io.write_string("oopsie \n", !IO),
        io.set_exit_status(1, !IO)
    ).
    



:- pred loop(int::in, int::in, io::di, io::uo) is det.

loop(N, Max, !IO) :-
    ( if N =< Max then
        io.write_string("\n", !IO),
        loop(N + 1, Max, !IO)
    else
        true
    ).

