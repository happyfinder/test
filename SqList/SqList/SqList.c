#include "SqList.h"
#include <stdlib.h>
#include <assert.h>
//扩容函数封装
void SqListadd(Sq* s)
{
	int newcapacity=s->capacity==0? 4:s->capacity*2;
	//满了就要扩容
	if(s->capacity==s->capacity)
	{
				ElemType*  tmp=(ElemType*)realloc(s->a,2*sizeof(ElemType)*newcapacity);
				if(tmp==NULL)//扩容失败
				{
					printf("realloc fail\n");
					exit(-1);
				}
				else
				{
					s->a=tmp;
					s->capacity=newcapacity;
				}
	}
}

void SqListInit( Sq  *s )
{
	s->a=NULL;
	s->capacity=0;
	s->size=0;
}

void SqListPushFront(Sq *s,ElemType x)
{    
	int end=s->size-1;
	SqListadd( s);
	   //初始条件
	  //结束条件
	  //迭代过程
    while(end>=0)
	{
		s->a[end+1]=s->a[end];
		end--;
	}
	s->a[0]=x;
    s->size++;
}
void SqListPushBack(Sq *s,ElemType x)
{
     SqListadd( s);
	s->a[s->size]=x;
	s->size++;
}
void SqListPopFront(Sq *s)
{
	int i;
   assert(s->size>0);
   
   for (i=1;i<=s->size-1;i++)
   {
	  s->a[i-1]=s->a[i];

   }
   s->size--;
}

void SqListPopBack(Sq *s)
{
	//断言  ,库是<assert.h>
	assert(s->size>0);
	s->size--;
}

void SqListInsert(Sq *s,int pos,ElemType x)
{
	int end=s->size-1;
	SqListadd(s);

	
	while(end>=pos)
	{
		s->a[end+1]=s->a[end];
		end--;
	}
	s->a[pos]=x;
	s->size++;
}

void SqListDlete(Sq *s,int pos)
{
	
	assert(pos<s->size);
	while(pos<=s->size-1)
	{
		s->a[pos]=s->a[pos+1];
		pos++;
		
	}
	s->size--;
}