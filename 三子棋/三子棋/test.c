#include <stdio.h>
#include "game().h"
void menue()
{
    printf("**********************\n");
         printf("**1. play***0. exist**\n");
          printf("**********************\n");
          printf("请选择->>\n");
}

//游戏的整个算法实现
void game()
{ 
	char ret=0;
	
	char board[row][col]={0};
	//初始化棋盘

     InitBoard(board,row,col);
	 //打印一个棋盘和落子情况
	 while(1)
	 {
		 //玩家下棋
	 DisplayBoard(board,row,col);
	 PlayerMove(board,row,col);
	 //判断玩家是否赢
	 ret=IsWin(board,row,col);
	 if(ret!='C')  {DisplayBoard(board,row,col); break;}
	 //电脑下棋
	 DisplayBoard(board,row,col);
	 ComputerMove(board,row,col);
	 //判断电脑是否赢
	 ret=IsWin(board,row,col);
	 if(ret!='C')	 {DisplayBoard(board,row,col); break;}
	 }
	 if(ret=='*') printf("玩家赢\n");
	 else if(ret =='@') printf("电脑赢\n");
	 else printf("平局\n");
	
	 
}






void test()
{    
	
    int input=0;
	//生成时间戳
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
                 printf("退出游戏\n");
                 break;
              default:
                  printf("输入错误，请重新输入\n");
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