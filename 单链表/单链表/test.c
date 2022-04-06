#include"SLIST.h"

int main()
{
	
	SNode* head=NULL;
	SListPushBack(&head,1);
	SListPushBack(&head,2);
	SListPushBack(&head,3);
	SListPushFront(&head,4);
	SListPushFront(&head,4);
   SListinsert(&head,2,27272);
	SListPrint(head );
	printf("\n");
  SListErase(&head,1);
	SListPrint(head );
	return 0;
}
