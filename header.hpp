// // Bit board representation for all pieces in start position
// // Each 64bit int represents where the pieces are on the board
// // The most significant bit is h8 and the least significant bit is a1
// /* WHITE PIECES */

// // White Pawns
// unsigned long long WP = 0b0000000000000000000000000000000000000000000000001111111100000000;

// // White King
// unsigned long long WK = 0b0000000000000000000000000000000000000000000000000000000000001000;

// // White Knights 
// unsigned long long WN = 0b0000000000000000000000000000000000000000000000000000000001000010;

// // White Queen
// unsigned long long WQ = 0b0000000000000000000000000000000000000000000000000000000000010000;

// // White Rooks
// unsigned long long WR = 0b0000000000000000000000000000000000000000000000000000000010000001;

// // White Bishops
// unsigned long long WB = 0b0000000000000000000000000000000000000000000000000000000000100100;


// /* BLACK PIECES */

// // Black Pawns
// unsigned long long BP = 0b0000000011111111000000000000000000000000000000000000000000000000;

// // Black King
// unsigned long long BK = 0b0000100000000000000000000000000000000000000000000000000000000000;

// // Black Knights
// unsigned long long BN = 0b0100001000000000000000000000000000000000000000000000000000000000;

// // Black Queen
// unsigned long long BQ = 0b0001000000000000000000000000000000000000000000000000000000000000;

// // Black Rooks
// unsigned long long BR = 0b1000000100000000000000000000000000000000000000000000000000000000;

// // Black Bishops
// unsigned long long BB = 0b0010010000000000000000000000000000000000000000000000000000000000;


// Struct representing the board position
typedef struct S_Board{
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

};  