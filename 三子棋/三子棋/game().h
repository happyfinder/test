#define col 3//��
#define row 3//��//ע�����ﲻҪ��;�š���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����
void intboard(char board[row][col],int ROW,int COL);

//��ʼ������
void InitBoard(char board[row][col],int ROW,int COL);
//��ӡһ������
void DisplayBoard(char board[row][col],int ROW,int COL);
//�������
void PlayerMove(char board[row][col],int ROW,int COL);
//��������
void ComputerMove(char board[row][col],int ROW,int COL);
//�ж��Ƿ���Ӯ
char IsWin(char board[row][col],int ROW,int COL);