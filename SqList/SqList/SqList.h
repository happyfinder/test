#include <stdio.h>
#include <string.h>
//ͨ������Ըı�������Ҫ���ٵĿռ�
#define N 10

//���ֿ��Ըı���Ҫ�ı�������
typedef  int  ElemType ;


typedef struct SqList
{
     ElemType* a ;//��̬���ٿռ�
	 int capacity;
	 int size;
}Sq;
//����ĵȼ�������Ĳ�������������д���룬���µ����ƴ��棬struct SqLsit == Sq
//typedef struct SqList Sq;

//��ɾ��ĵȽӿں���

void SqListInit( Sq  *s);//��ʼ��˳���
void SqListPushFront(Sq *s,ElemType x);//��˳���ǰ�����һ��Ԫ��
void SqListPushBack(Sq *s,ElemType x);//��˳���������һ��Ԫ��
void SqListPopFront(Sq *s);//����˳����һ��Ԫ��
void SqListPopBack(Sq *s);//����˳������һ��Ԫ��
void SqListInsert(Sq *s,int pos,ElemType x);//������λ�ò���Ԫ��
void SqListDlete(Sq *s,int pos);//ɾ������λ�õ�Ԫ��