:- module hellotest.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module string.
:- import_module random.
:- import_module int.

main(!IO) :-
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
                io.write_string("Omg I'm gonna ferk \n", !IO),
                random.int(11, ProgNum),
                play_guessing_game(ProgNum, NewState, !IO)
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
    ).

:- pred loop(int::in, int::in, io::di, io::uo) is det.
loop(N, Max, !IO) :-
    ( if N =< Max then
        io.write_string("\n", !IO),
        loop(N + 1, Max, !IO)
    else
        true
    ).

:- pred play_guessing_game(int::in, int::in, io::di, io::uo) is det.
play_guessing_game(ProgNum, State, !IO) :-
    io.write_string("\nLets play guess the number \nI'm thinking of a number between 1 - 10", !IO),
    io.read_line_as_string(UNum, !IO),
    (
        UNum = ok(Sinep),
        Vinny = string.strip(Sinep),
        string.to_int(Vinny, GAM),
        (
            GAM = ProgNum
            -> io.write_string("Holy shit you got it right\n", !IO)
            ;
                io.write_string("Lmao, incorrect. Try again! \n", !IO),
                io.set_exit_status(1, !IO)
        )
    ;
        UNum = eof,
        io.write_string("What are you ignoring me \n", !IO),
        io.set_exit_status(1, !IO)
    ;
        UNum = error(_),
        io.write_string("Oopsie \n", !IO),
        io.set_exit_status(1, !IO)
    ).
