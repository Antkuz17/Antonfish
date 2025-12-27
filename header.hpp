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

    /* CHANGE THIS LATER */
    // En Passant Target Square (if a pawn moves two squares forward, this is set to the square behind it)
    unsigned long long enPassantTargetSquare;

    // Side to move (0 for white, 1 for black)
    bool sideToMove;

    // White Castling Rights
    bool WCasKing;
    bool WCasQueen;

    // Black Castling Rights
    bool BCasKing;
    bool BCasQueen;
};  


// Initilization of board to the start chess position
S_Board StartPos();


