#include "game().h"
//������ʵ��
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
		//��ӡ�����
		for(j=0;j<col; j++)
		{
		printf(" %c ",board[i][j]);
		if(j<col-1)
		printf("|");
		}
		printf("\n");
	   //��ӡ�ָ���
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

	printf("��ѡ��Ҫ���ӵ�����λ��->");

	scanf("%d%d",&x,&y);
	while(1)
	{
		   
	 if(x>=1&&x<=col&&y>=1&&y<=row)
	 {
		 if(board[y-1][x-1]==' '){ board[y-1][x-1]='*';break;}
		else printf("��λ���Ѿ��¹���������ѡ��");
		
	 }
	 else
	 {
		printf("����������������룡");
	 }
	}
}


void ComputerMove(char board[row][col],int ROW,int COL)
{
	int x=0;
	int y=0;
	printf("��������->\n");

	
	while (1)
	{
		//�����������
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
//�������
//	1.���Ӯ-��*��
//	2.����Ӯ-��@��
//	3.ƽ��-������
//	4.����-��C��
char IsWin(char board[row][col],int ROW,int COL)
{
	int i=0;
	//�ж����Ƿ�����Ӯ������
	for (i=0;i<row; i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//�ж����Ƿ�����Ӯ������
	for (i=0;i<col; i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//�ж�б���Ƿ�����Ӯ������
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ') return board[1][1];
	if (board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ') return board[1][1];
	if(Isqual(board,row,col)==1) return '!';

	return 'C';
}
