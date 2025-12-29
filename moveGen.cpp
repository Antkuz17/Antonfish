// Returns all legal pawn moves on the board in an array

int genPawnMoves(const S_board &board, int moves[]){
    int numMoves{};

    unsigned long long allPieces = board.WP | board.BP | board.WR | board.BR | board.WN | board.BN | board.WB | board.BB | board.WQ | board.BQ | board.WK | board.BK;
    unsigned long long empty = ~allPieces;

    // If white to move
    if (sideToMove == 0){
        unsigned long long pawns = board.WP;
        

    }
    // else{
    //     unsigned long long pawns = board.BP;
    //     while (pawns != 0){

    //     }
    // }



    return numMoves;
}









