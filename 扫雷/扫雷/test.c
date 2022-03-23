#include <stdio.h>
#include "game.h"

void menue()
{
	
	printf("********************\n");
	printf("****    1.play  ****\n");
	printf("****    0.exist  ***\n");
	printf("********************\n");
}

void game()
{
	
    //雷的信息存储
	//1.布置好的雷的位置信息
	char mine[ROWS][COLS];
	
	//2.扫出来雷的信息
	char show[ROWS][COLS];
	//初始化雷区
	InitBoard(mine , ROWS, COLS, '0');
	InitBoard(show , ROWS, COLS, '*');
	//打印雷区
	DisplayBoard(show,ROW,COL);
	//DisplayBoard(mine ,ROW,COL);
	//布置雷
	Setmine(mine ,ROW ,COL);
	
	//扫雷
	Findmine(mine , show , ROW, COL);

	

}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));

	do{
		menue();
		printf("请选择->");
	    scanf("%d",&input);
		printf("\n");

		switch(input)
		{
			case 1:
			   game();
				break;

			case 0:
				printf("退出游戏\n");
				break;

			default:
				printf("选择错误，请重新选择\n");
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
