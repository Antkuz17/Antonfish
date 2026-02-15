#include <bit>

// Returns all legal pawn moves on the board in an array

int genPawnMoves(const S_board &board, int moves[]){

    // Number of moves generated, more used for debugging purposes to make sure all possible moves are generated
    int numMoves{};

    // Bitboard of all pieces on the board
    unsigned long long allPieces = board.WP | board.BP | board.WR | board.BR | board.WN | board.BN | board.WB | board.BB | board.WQ | board.BQ | board.WK | board.BK;

    // Bitboard of all empty squares on the board
    unsigned long long empty = ~allPieces;

    // If white to move, logic same for black but movement is down not up
    if (sideToMove == 0){
        unsigned long long pawns = board.WP;

        // We want to move through every pawn and look at the possible moves that it can make
        while(pawns != 0){

            // Move from right to left on the pawns
            // pawns can single push, double push, take left and take right, also enpassant

            // Extracting right most pawn, note that a pawn g2 would be considered more forward then h3 since in the unsigned long its further
            unsigned long long rightMostPawn{1 << std::countr_zero(pawns)};

            //  CHANGE LATER, RIGHT NOW WANNA TEST MOVE GEN AND JUST COUNT NUM POSES
            
            // Code for single push

            // We need to check that the forward square is not taken
            if()

            // Code for double push










            // Deleting the pawn from the list meaning that its positions have been analysed
            pawns ^= rightMostPawn;
            

        }


  
    }
    // else{
    //     unsigned long long pawns = board.BP;
    //     while (pawns != 0){

    //     }
    // }



    return numMoves;
}









