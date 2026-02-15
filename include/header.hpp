// Struct for undoing the previous move
struct S_Undo{
    int move;
    int castlePerms;
    int enPas;
    int fiftyMove;
    unsigned long long posKey;
};

// Struct representing the board position
struct S_Board{


    // Pawns
    unsigned long long WP;
    unsigned long long BP; 

    // Rooks
    unsigned long long WR;
    unsigned long long BR; 

    // Knights
    unsigned long long WN;
    unsigned long long BN; 

    // Bishops
    unsigned long long WB;
    unsigned long long BB; 
    
    // Queens
    unsigned long long WQ;
    unsigned long long BQ; 
    
    // Kings
    unsigned long long WK;
    unsigned long long BK; 

    /* IMPORTANT VARIABLES */

    // Fifty Move Rule Counter (if a pawn is moved or a piece is captured, this is reset to 0)
    unsigned char fiftyMove;

    // Current Plies (half-moves)
    unsigned short currentPlies;

    // History Plies
    unsigned short hisPly;

    /* CHANGE THIS LATER */
    // En Passant Target Square (if a pawn moves two squares forward, this is set to the square behind it)
    unsigned long long enPas;

    // Side to move (0 for white, 1 for black)
    bool sideToMove;

    // Position Key
    unsigned long long posKey;

    /*
    Castling permissions by flag, if bit = 1 then castle is allowed 
        bit 0: white king side
        bit 1: white queen side
        bit 2: black king side
        bit 3: black queen side
    */
    unsigned char castlePerms;

    // Array to track the time line of moves to be able to track backwards in case
    S_Undo history[256]{};
    
};  



// Prints the board to the terminal for debugging purposes
void printBoard(const S_Board &board);

// Used in the print board function for clear code
void printLine();







// Initilization of board to the start chess position
S_Board StartPos();

// Changing Castling Perms
void setWCasKing(S_Board &board);
void setWCasQueen(S_Board &board);
void setBCasKing(S_Board &board);
void setBCasQueen(S_Board &board);



