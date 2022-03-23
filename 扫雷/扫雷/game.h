# define ROW 9

# define COL 9

# define ROWS ROW+2
#define COLS COL+2
#define COUT 10
#include <stdlib.h>
#include <time.h>


//初始化雷区函数
void InitBoard(char board[ROWS][COLS],int rows ,int cols ,char set);
//打印雷区
void DisplayBoard(char show[ROWS][COLS],int rows,int cols);
//布置雷
void Setmine(char board[ROWS][COLS] ,int row,int col);
//扫雷函数
void Findmine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row ,int col );