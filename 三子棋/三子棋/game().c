#include "game().h"
//函数的实现
void InitBoard(char board[row][col],int ROW,int COL)
{
	int i;
	int j;

	for (i=0;i<ROW;i++)
	{
		for (j =0; j<COL; j++)
		{
			board[i][j]=' ';
		}
	}
}


void DisplayBoard(char board[row][col],int ROW,int COL)
{
	int i;
	int j;

	for (i=0;i<row; i++)
	{ 
		//打印下棋格
		for(j=0;j<col; j++)
		{
		printf(" %c ",board[i][j]);
		if(j<col-1)
		printf("|");
		}
		printf("\n");
	   //打印分割行
			for ( j=0; j<col; j++)
			{
			printf("---");
			if(j<col-1)
				printf("|");
			}
		
		printf("\n");
	}
}


void PlayerMove(char board[row][col],int ROW,int COL)
{
	int x;
	int y;

	printf("请选择要下子的坐标位置->");

	scanf("%d%d",&x,&y);
	while(1)
	{
		   
	 if(x>=1&&x<=col&&y>=1&&y<=row)
	 {
		 if(board[y-1][x-1]==' '){ board[y-1][x-1]='*';break;}
		else printf("该位置已经下过，请重新选择！");
		
	 }
	 else
	 {
		printf("输入错误，请重新输入！");
	 }
	}
}


void ComputerMove(char board[row][col],int ROW,int COL)
{
	int x=0;
	int y=0;
	printf("电脑下棋->\n");

	
	while (1)
	{
		//电脑随机下棋
		x=rand()%ROW;
	    y=rand()%COL;
		if(board[x][y]==' ') 
		{
			board[x][y]='@';
			break;
		}
	}
}

int Isqual(char board[row][col],int ROW,int COL)
{
	int i ;
	int j;
	for (i=0;i <ROW; i++)
	{
		for (j=0; j<COL; j++)
		{
			if(board[i][j]==' ') return 0;
		}
	}

	return 1;
}
//
//四种情况
//	1.玩家赢-‘*’
//	2.电脑赢-‘@’
//	3.平局-‘！’
//	4.继续-‘C’
char IsWin(char board[row][col],int ROW,int COL)
{
	int i=0;
	//判断行是否满足赢的条件
	for (i=0;i<row; i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//判断列是否满足赢的条件
	for (i=0;i<col; i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//判断斜的是否满足赢的条件
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ') return board[1][1];
	if (board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ') return board[1][1];
	if(Isqual(board,row,col)==1) return '!';

	return 'C';
}
