#pragma once

//Á´±í
struct LCode_SinglyList
{
	LCode_SinglyList *next;
	int value;
	LCode_SinglyList( int x )
	{
		value = x;
		next = nullptr;
	}
};

struct LCode_ListNode
{
	int val;
	LCode_ListNode* next;
	LCode_ListNode( ) : val( 0 ), next( nullptr ) { };
	LCode_ListNode( int x ) : val( x ), next( nullptr ) {};
	LCode_ListNode( int x, LCode_ListNode* node ) : val( x ), next( node ) {};
};