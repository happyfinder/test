# define ROW 9

# define COL 9

# define ROWS ROW+2
#define COLS COL+2
#define COUT 10
#include <stdlib.h>
#include <time.h>


//��ʼ����������
void InitBoard(char board[ROWS][COLS],int rows ,int cols ,char set);
//��ӡ����
void DisplayBoard(char show[ROWS][COLS],int rows,int cols);
//������
void Setmine(char board[ROWS][COLS] ,int row,int col);
//ɨ�׺���
void Findmine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row ,int col );