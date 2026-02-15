#include <iostream>
#include "header.hpp"
#include <bit>

int main(){
    unsigned char n = 8;
    std::cout << std::countr_zero(n) << std::endl;
    // S_Board test = StartPos();
    // printBoard(test);
    // return 0;
}



// Initilization of board to the start chess position
S_Board StartPos(){
    S_Board newBoard;
    newBoard.WP = 0b0000000000000000000000000000000000000000000000001111111100000000;
    newBoard.BP = 0b0000000011111111000000000000000000000000000000000000000000000000;

    newBoard.WK = 0b0000000000000000000000000000000000000000000000000000000000010000;
    newBoard.BK = 0b0001000000000000000000000000000000000000000000000000000000000000;

    newBoard.WR = 0b0000000000000000000000000000000000000000000000000000000010000001;
    newBoard.BR = 0b1000000100000000000000000000000000000000000000000000000000000000;

    newBoard.WN = 0b0000000000000000000000000000000000000000000000000000000001000010;
    newBoard.BN = 0b0100001000000000000000000000000000000000000000000000000000000000;

    newBoard.WB = 0b0000000000000000000000000000000000000000000000000000000000100100;
    newBoard.BB = 0b0010010000000000000000000000000000000000000000000000000000000000;

    newBoard.WQ = 0b0000000000000000000000000000000000000000000000000000000000001000;
    newBoard.BQ = 0b0000100000000000000000000000000000000000000000000000000000000000;

    newBoard.fiftyMove = 0;
    newBoard.currentPlies = 0;
    newBoard.hisPly = 0;
    newBoard.enPas = 0;
    newBoard.sideToMove =  0;
    newBoard.posKey = 0;
    newBoard.castlePerms = 15;

    return newBoard;
}

// Following function set castling rights off for a specific castle type
void setWCasKing(S_Board &board){
    board.castlePerms &= ~1;
}

void setWCasQueen(S_Board &board){
    board.castlePerms &= ~2;
}

void setBCasKing(S_Board &board){
    board.castlePerms &= ~4;
}
void setBCasQueen(S_Board &board){
    board.castlePerms &= ~8;
}

// To compile and run the code:
// g++ -std=c++20 Antonfish.cpp -o test.exe ; .\test.exe