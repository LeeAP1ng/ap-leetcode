#pragma once

//����
struct LCode_ListNode
{
	int val;
	LCode_ListNode* next;
	LCode_ListNode( ) : val( 0 ), next( nullptr ) { };
	LCode_ListNode( int x ) : val( x ), next( nullptr ) {};
	LCode_ListNode( int x, LCode_ListNode* node ) : val( x ), next( node ) {};
};