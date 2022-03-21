#define col 3//列
#define row 3//行//注意这里不要加;号。。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//声明
void intboard(char board[row][col],int ROW,int COL);

//初始化棋盘
void InitBoard(char board[row][col],int ROW,int COL);
//打印一个棋盘
void DisplayBoard(char board[row][col],int ROW,int COL);
//玩家下棋
void PlayerMove(char board[row][col],int ROW,int COL);
//电脑下棋
void ComputerMove(char board[row][col],int ROW,int COL);
//判断是否输赢
char IsWin(char board[row][col],int ROW,int COL);