:- module pres.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.
:- pred loop(int::in, int::in, io::di, io::uo) is det.

:- implementation.
:- import_module string.
:- import_module random.
:- import_module int.

loop(N, Max, !IO) :-
    ( if N =< Max then
        io.write_string("🐟\n", !IO),
        loop(N + 1, Max, !IO)
    else
        true
    ).

main(!IO) :-
   io.write_string("\n", !IO),
   io.write_string("Hey I would like to go fishing!!!!\n", !IO),
   io.write_string("How many fish should I catch?\n", !IO),
   io.write_string("\n", !IO),
   io.read_line_as_string(UNum, !IO),
   (
      UNum = ok(Sinep),
      Vinny = string.strip(Sinep),
      (if string.to_int(Vinny,NumFish) then
      (
         loop(1,NumFish, !IO)
      )
      else
         io.write_string("That's not even a number  \n", !IO),
         io.set_exit_status(1, !IO)
      )
   ;
      UNum = eof,
         io.write_string("What are you ignoring me \n", !IO),
         io.set_exit_status(1, !IO)
   ;
      UNum = error(_),
         io.write_string("You must love kanye \n", !IO),
         io.set_exit_status(1, !IO)
   ),
   io.write_string("I Caught the fish now call me a Good Program !!\n", !IO),
   io.read_line_as_string(User, !IO),
   (
      User = ok(Line),
      Input = string.to_lower(string.strip(Line)),
      Lookforthis = "good boy",
      Semiok = "good program",
      ( if Input = Lookforthis then
            io.write_string("A little werid but thank you : ) \n", !IO)
         else if Input = Semiok then
            io.write_string("Thank you 😊\n", !IO)
         else
            io.write_string("Lame👎\n", !IO)
      )
   ;
      User = eof,
      io.write_string("What are you ignoring me \n", !IO)
   ;
      User = error(_),
      io.write_string("I love Kanye \n", !IO)
   ).








