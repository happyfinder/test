#include <stdint.h>


int main()
{
	int a =7; 
	int b= 10;
	//异或相同为0，不同为1；
	a=a^b;
	b=a^b;
	a=a^b;

	printf("a=%d b=%d",a,b);

	return 0;
}