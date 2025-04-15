:- module randgen.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int, random, time.

main(!IO) :-
    % Get the current time
    time.current_time(Time, !IO),

    % Use the current time to seed the random number generator
    TimeSeed = time.to_int(Time),
    random.init(TimeSeed, RandState0),

    % Generate a random number
    random.random(RandState0, Rand, RandState1),

    % Reduce it to a range (1 to 10)
    Num = (Rand mod 10) + 1,

    % Output the random number
    io.format("Your random number is: %d\n", [i(Num)], !IO).
