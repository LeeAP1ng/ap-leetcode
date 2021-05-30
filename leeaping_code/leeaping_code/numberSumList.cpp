
#include "numberSumList.h"

LCode_NumberSumList::LCode_NumberSumList( )
{
}

LCode_NumberSumList::~LCode_NumberSumList( )
{
}


LCode_ListNode * LCode_NumberSumList::addTowNumbers( LCode_ListNode * l1, LCode_ListNode * l2 )
{
	LCode_ListNode *head = new LCode_ListNode( 0 );
	LCode_ListNode *tail = head;
	int carry = 0;	//½øÎ»·û
	while( l1 != nullptr || l2 != nullptr )
	{
		int sum = 0;
		if( l1 != nullptr )
		{
			sum += l1->val;
			l1 = l1->next;
		}

		if( l2 != nullptr )
		{
			sum += l2->val;
			l2 = l2->next;
		}

		sum += carry;
		carry = sum / 10;
		tail->next = new LCode_ListNode( sum % 10 );
		tail = tail->next;
	}

	if( carry > 0 )
	{
		tail->next = new LCode_ListNode( carry );
	}

	return head->next;
}
