#include <stdint.h>


int main()
{
	int a =7; 
	int b= 10;
	//�����ͬΪ0����ͬΪ1��
	a=a^b;
	b=a^b;
	a=a^b;

	printf("a=%d b=%d",a,b);

	return 0;
}