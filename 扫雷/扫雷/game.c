#include "game.h"
#include <stdio.h>

void InitBoard(char board[ROWS][COLS],int rows ,int cols ,char set)
{
	int i ;
	int j ;

	for (i=0; i<rows;i ++)
	{
		for (j =0; j <cols; j++)
			board[i][j]=set;

	}
}


void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	int i;

	int j;
	printf("  ");
	for (i=1; i<=col;  i++)
		printf("%d ",i);

	
	for (i=1;i <=row; i++)
	{  
		printf("\n");
		printf("%d",i);
		for (j =1; j <=col ; j++)
		{
			printf(" %c",board[i][j]);
		}
	}
	printf("\n\n");
}

void Setmine(char board[ROWS][COLS] ,int row,int col)
{
	int cout=COUT;
	while (cout )
	{
		int x=rand()%row+1;
		int y=rand()%col+1;

		if(board[x][y]=='0') 
		{
			board[x][y]='1';
			cout--;
		}
	}
}
//得到周围雷的数量
int get_cout(char mine[ROWS][COLS],int x,int y)
{
	return        mine[x-1][y-1]+
		   mine[x-1][y]+
	 	   mine[x-1][y+1]+
		   mine[x][y-1]+
		   mine[x][y+1]+
		   mine[x+1][y-1]+
		   mine[x+1][y]+
		   mine[x+1][y+1]-'0'*8;
}

void Findmine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row ,int col )
{
	int x;
	int y;
	int  iswin;
	iswin=row*col-COUT;
  while(iswin>0)
  {
	  	printf("请输入要排查的雷坐标->");
	scanf("%d%d",&x,&y);
	printf("\n");

	if(x>=1&&x<=row&&y>=1&&y<=col)
	{
		if(mine[x][y]=='1')
		{
			printf("失败，游戏结束\n");
			DisplayBoard(mine ,ROW,COL);
			break;
			
		}
		else 
		{
			int a=get_cout(mine,x,y);
			
			show[x][y]=a+'0';
			DisplayBoard(show ,ROW,COL);
			//DisplayBoard(mine ,ROW,COL);
			iswin--;
		}
	}
  }
  if(iswin==0) 
  {
	DisplayBoard(mine ,ROW,COL);
	  printf("恭喜你，扫雷成功\n\n");
  }
}