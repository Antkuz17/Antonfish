November 10, 2025:

Anton: Just started the project. I’ve been wanting to build a chess engine for a long time now and think overall they are very cool and include lots of complex logic that would be amazing to learn. Currently, I’m not really sure what direction to go or what to start building. I’m gonna start by reading a bunch about how most engines work and what algorithms basic ones use. There are some very cool YouTube videos that I found that should also give some insight into what to start with. Note: this is my first time keeping such a concrete daily log. I think it will be nice to look back on progress and also use it as a docs tool to solve problems later on. Wish me luck.

Note: From here on, each entry will follow the devlogformat, this first entry is just a quick description of what the project is.


## November 10, 2025 

### Goal / Objective
> Begin to understand how chess engines work 

### Tasks Completed
- Chose bitboards as the representation of the chessboard to simplify move generation and board evaluation.
- Selected C++ for its performance and low-level control, suitable for engine development.
- Began looking at how search algorithms function.


### Next Steps / TODO
- Implement basic bitboard representation and piece placement.
- Continue research

December 27,2025

Just finished exams, took a bit of a break but now I have a bit more free time to work on this engine. Should very cool and will definitely work



## December 27, 2025

### Goal / Objective
> Mostly do more research and screw around more with bitboards, gonna try to set up some basic move generation 

### Tasks Completed
- Completed the main struct for storing a position
- Optimized this struct for low memory usage (tested storing in array vs not for padding purposes)
- Added functions for castling and tracking of permissions

### Next Steps / TODO
- Write a print function to view the S_Board Struct in terminal
- Start creating move generation properly



## December 28, 2025

### Goal / Objective
> Complete the board display based on bitboards and instead of move generation im gonna plan out fully what the first engine will be
> Im not gonna do any fancy deep searching algorithms, just the bare bones and then im gonna work on optimizing it after I have a working version
> Zobrist hash, alpha beta prunning, and null move prunning will be implemented later

### Tasks Completed
- Wrote the display terminal function for the chess board
- I think I have most of move generation figured out. Not the generation itself but the notation and how I will implement
- Moves will be stores as follows, bits 0-5 start square, 6-11, end square, the rest will store if it was a capture, what was captured, if it was a promotion and to what, castle?, en passant?
- lost faith in myself

### Next Steps / TODO
- Tomorrow get pawn and maybe rook movement functions done
- Try not to loose my sanity


## December 30, 2025

### Goal / Objective
> Was busy today so all I wanna get done is the pawn move generation in the format previously described

### Tasks Completed
- Wrote the display terminal function for the chess board
- I think I have most of move generation figured out. Not the generation itself but the notation and how I will implement
- Moves will be stores as follows, bits 0-5 start square, 6-11, end square, the rest will store if it was a capture, what was captured, if it was a promotion and to what, castle?, en passant?
- lost faith in myself

### Next Steps / TODO
- Tomorrow get pawn and maybe rook movement functions done
- Try not to loose my sanity