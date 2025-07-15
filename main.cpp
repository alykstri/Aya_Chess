#include <stdio.h>
typedef unsigned long long  U64;
typedef unsigned char uchar;
#define C64(constantU64) constantU64##ULL

typedef enum{
    WP, WN, WB, WR, WQ, WK,
    BP, BN, BB, BR, BQ, BK
}pieceIDs;
typedef enum{white, black}color;
typedef enum{cna,cw,cb,cwb}castling;

typedef struct{
    U64 w_pawns; //0
    U64 w_knights; //1
    U64 w_bishops; //2
    U64 w_rooks; //3
    U64 w_queens; //4
    U64 w_king; //5
    U64 b_pawns; 
    U64 b_knights;
    U64 b_bishops;
    U64 b_rooks;
    U64 b_queens;
    U64 b_king;
}pieceBoards;

typedef struct{
    U64 pieces[6]; //0-5 P-K
    U64 occ[2]; //0-WhiteP 1-BlackP
    bool side; //0-White 1-Black
    uchar castling; 
}position;

int main()
{
    printf("Hello World");
    return 0;
}