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
	
    //�׵���Ϣ�洢
	//1.���úõ��׵�λ����Ϣ
	char mine[ROWS][COLS];
	
	//2.ɨ�����׵���Ϣ
	char show[ROWS][COLS];
	//��ʼ������
	InitBoard(mine , ROWS, COLS, '0');
	InitBoard(show , ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show,ROW,COL);
	//DisplayBoard(mine ,ROW,COL);
	//������
	Setmine(mine ,ROW ,COL);
	
	//ɨ��
	Findmine(mine , show , ROW, COL);

	

}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));

	do{
		menue();
		printf("��ѡ��->");
	    scanf("%d",&input);
		printf("\n");

		switch(input)
		{
			case 1:
			   game();
				break;

			case 0:
				printf("�˳���Ϸ\n");
				break;

			default:
				printf("ѡ�����������ѡ��\n");
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
