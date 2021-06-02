#pragma once
#include "../Helper/code_helper.h"
/*
*给定两个链表表示的整数，给出两个非空的链表用来表示两个非负的整数。其中，它们各自的位数是按照逆序的方式存储的，并且它们的每个节点只能存储一位数字。
*如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
*您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
*LeetCode No.2
*/

class LCode_NumberSumList
{
	LCode_NumberSumList( );
	~LCode_NumberSumList( );

	LCode_ListNode* addTowNumbers( LCode_ListNode* l1, LCode_ListNode * l2 );
};