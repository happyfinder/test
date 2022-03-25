#include <stdio.h>


int main()
{

	//要统计的数字
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
//这种方法只能适用于正整数