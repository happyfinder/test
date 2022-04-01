#include "SqList.h"
#include <stdint.h>


int main()
{
	int i;
	Sq s1;
	SqListInit( &s1 );
	SqListPushBack(&s1,1);
	SqListPushBack(&s1,2);
	SqListPushBack(&s1,3);
	SqListPushBack(&s1,4);
	SqListPushBack(&s1,5);
	SqListPushBack(&s1,6);
	SqListPushBack(&s1,7);
	SqListPushBack(&s1,8);
	SqListPushBack(&s1,9);
	SqListPushBack(&s1,1);
	SqListPushBack(&s1,2);
	SqListPushBack(&s1,3);
	SqListPushBack(&s1,4);
	SqListPushBack(&s1,5);
	SqListPushBack(&s1,6);
	SqListPushBack(&s1,7);
	SqListPushBack(&s1,8);
	SqListPushBack(&s1,9);
	SqListPushFront(&s1,999);
	SqListPopFront(&s1);
    SqListInsert(&s1, 0, 789);
    SqListDlete(&s1, 1);
	for (i=0; i<s1.size;i++)
	{
		
			
		
			printf("%d ",s1.a[i]);
		
	}
   return 0;
}
