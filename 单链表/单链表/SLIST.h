#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;


typedef struct SListNode
{
	ElemType date;
	struct SListNode* next;
}SNode;

//打印链表
void SListPrint(SNode* phead );
//链表的尾插
void SListPushBack(SNode**  pphead,ElemType x);//二级指针
//链表的头插
void SListPushFront(SNode** pphead,ElemType x);
//链表的头删
//链表的尾删
//链表的查找第一个元素
SNode* SListFoundElem(SNode* phead,ElemType x);
//链表的插入元素
void SListinsert(SNode** pphead,ElemType x,ElemType y);
//链表的删除元素
void SListErase(SNode** pphead,ElemType x);
