#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;


typedef struct SListNode
{
	ElemType date;
	struct SListNode* next;
}SNode;

//��ӡ����
void SListPrint(SNode* phead );
//�����β��
void SListPushBack(SNode**  pphead,ElemType x);//����ָ��
//�����ͷ��
void SListPushFront(SNode** pphead,ElemType x);
//�����ͷɾ
//�����βɾ
//����Ĳ��ҵ�һ��Ԫ��
SNode* SListFoundElem(SNode* phead,ElemType x);
//����Ĳ���Ԫ��
void SListinsert(SNode** pphead,ElemType x,ElemType y);
//�����ɾ��Ԫ��
void SListErase(SNode** pphead,ElemType x);
