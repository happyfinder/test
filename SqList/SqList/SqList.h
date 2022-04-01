#include <stdio.h>
#include <string.h>
//通过宏可以改变你所需要开辟的空间
#define N 10

//这种可以改变需要的变量类型
typedef  int  ElemType ;


typedef struct SqList
{
     ElemType* a ;//动态开辟空间
	 int capacity;
	 int size;
}Sq;
//上面的等价于下面的操作，这样方便写代码，用新的名称代替，struct SqLsit == Sq
//typedef struct SqList Sq;

//增删查改等接口函数

void SqListInit( Sq  *s);//初始化顺序表
void SqListPushFront(Sq *s,ElemType x);//再顺序表前面插入一个元素
void SqListPushBack(Sq *s,ElemType x);//在顺序表后面插入一个元素
void SqListPopFront(Sq *s);//弹出顺序表第一个元素
void SqListPopBack(Sq *s);//弹出顺序表最后一个元素
void SqListInsert(Sq *s,int pos,ElemType x);//在任意位置插入元素
void SqListDlete(Sq *s,int pos);//删除任意位置的元素