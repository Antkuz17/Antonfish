#include <iostream>
#include "header.hpp"

// Prints the board to the terminal for debugging purposes
void printBoard(const S_Board &board){
    printLine();
    std::cout << "8 ";
    short currentRow = 7;
    for(int i{63}; i > -1; i--){
        if (i % 8 == 7 && i != 63){
            std::cout << "|" << std::endl;
            printLine();
            std::cout << currentRow << " ";
            currentRow--;
        }
        unsigned long long mask { 1ULL << i };
            if ((board.WP & mask) != 0){
                std::cout << "| P ";
                continue;
            }
            if ((board.BP & mask) != 0){
                std::cout << "| p ";
                continue;
            }
            if ((board.WN & mask) != 0){
                std::cout << "| N ";
                continue;
            }
            if ((board.BN & mask) != 0){
                std::cout << "| n ";
                continue;
            }
            if ((board.WB & mask) != 0){
                std::cout << "| B ";
                continue;
            }
            if ((board.BB & mask) != 0){
                std::cout << "| b ";
                continue;
            }
            if ((board.WR & mask) != 0){
                std::cout << "| R ";
                continue;
            }
            if ((board.BR & mask) != 0){
                std::cout << "| r ";
                continue;
            }
            if ((board.WQ & mask) != 0){
                std::cout << "| Q ";
                continue;
            }
            if ((board.BQ & mask) != 0){
                std::cout << "| q ";
                continue;
            }
            if ((board.WK & mask) != 0){
                std::cout << "| K ";
                continue;
            }
            if ((board.BK & mask) != 0){
                std::cout << "| k ";
                continue;
            }
            std::cout << "|   ";

    }
    std::cout << "|" << std::endl;
    printLine();
    std::cout << "    a   b   c   d   e   f   g   h " << std::endl;
}

// Used in the print board function for clear code
void printLine(){
    std::cout << "  +---+---+---+---+---+---+---+---+" << std::endl;
}   