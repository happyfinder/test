#include "SLIST.h"

SNode* CreatNewNode(ElemType x)
{
		SNode* BackNode=(SNode*)malloc(sizeof(SNode));
	BackNode->next=NULL;
	BackNode->date=x;

	return BackNode;

}

void SListPrint(SNode* head )
{
	SNode* cur=head;
	while(cur)
	{
		printf("%d->",cur->date);
		cur=cur->next;
	}
	printf("NULL");
}

void SListPushBack(SNode**  pphead,ElemType x)
{
	SNode* BackNode= CreatNewNode( x);

	if(*pphead==NULL)
	{
		*pphead=BackNode;
	}
	else
	{
		SNode* tail=*pphead;
		while(tail->next!=NULL)
		{
			tail=tail->next;
		}
		tail->next=BackNode;

	}
	

	
}

void SListPushFront(SNode** pphead,ElemType x)
{
	SNode* FrontNode= CreatNewNode( x);

    FrontNode->next=*pphead;
	*pphead=FrontNode;


}

SNode* SListFoundElem(SNode* phead,ElemType x)
{
	SNode * cur=phead;
	while (cur)
	{
		if(cur->date==x)
		{
			
			return cur; 
		}
		else 
		{
			cur=cur->next;
		}
	}
	
	return NULL;
}

void SListinsert(SNode** pphead,ElemType x,ElemType y)
{
	    SNode* newin= CreatNewNode(y);

		SNode* pre=*pphead;
		while(pre->next)
		{
			if(pre==SListFoundElem(*pphead, x))
			{
				newin->next=*pphead;
				*pphead=newin;
				
			}
			if(pre->next==SListFoundElem(*pphead, x))
			{
				newin->next=pre->next;
				pre->next=newin;
				break;
			
			}
			else 
			{
				pre=pre->next;
			}
		}
}

void SListErase(SNode** pphead,ElemType x)
{
      	SNode* pre=*pphead;
			while(pre)
			{
		if(pre->date==x)
		{
			*pphead=pre->next;
			break;
			
		}
		
		
			if(pre->next->date==x)
			{
				pre->next=pre->next->next;
				break;
			}
			pre=pre->next;
			}
}