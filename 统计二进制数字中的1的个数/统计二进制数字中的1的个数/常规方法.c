#include <stdio.h>


int main()
{

	//Ҫͳ�Ƶ�����
	int a;
	int count =0;
	scanf("%d",&a);

	while (a)
	{
		if(a%2==1)  count++;
		a/=2;
	}
	printf("%d",count);
	return 0;
}
//���ַ���ֻ��������������