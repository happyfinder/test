#include <stdio.h>
#include "game().h"
void menue()
{
    printf("**********************\n");
         printf("**1. play***0. exist**\n");
          printf("**********************\n");
          printf("��ѡ��->>\n");
}

//��Ϸ�������㷨ʵ��
void game()
{ 
	char ret=0;
	
	char board[row][col]={0};
	//��ʼ������

     InitBoard(board,row,col);
	 //��ӡһ�����̺��������
	 while(1)
	 {
		 //�������
	 DisplayBoard(board,row,col);
	 PlayerMove(board,row,col);
	 //�ж�����Ƿ�Ӯ
	 ret=IsWin(board,row,col);
	 if(ret!='C')  {DisplayBoard(board,row,col); break;}
	 //��������
	 DisplayBoard(board,row,col);
	 ComputerMove(board,row,col);
	 //�жϵ����Ƿ�Ӯ
	 ret=IsWin(board,row,col);
	 if(ret!='C')	 {DisplayBoard(board,row,col); break;}
	 }
	 if(ret=='*') printf("���Ӯ\n");
	 else if(ret =='@') printf("����Ӯ\n");
	 else printf("ƽ��\n");
	
	 
}






void test()
{    
	
    int input=0;
	//����ʱ���
	srand((unsigned int)time(NULL));
    do 
    {
        menue();
        scanf("%d",&input);
          switch(input)
          {
              case 1:
              game();
                break;
              case 0:
                 printf("�˳���Ϸ\n");
                 break;
              default:
                  printf("�����������������\n");
                  break;                
          }
    }
    while(input);
    
}

int main()
{
    test();
    
    return 0;
}