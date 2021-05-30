#include <stdio.h>
#include "code_headfile.h"
#include "reverse.h"
#include "ap_code.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main( )
{
	//Reverse reverse;
	//int ret = reverse.reverse( 123 );

	//const int  a = 7;
	//int  *p = ( int* )&a;
	//*p = 8;
	//std::cout << a;
	//system( "pause" );
	//volatile const int a = 7;
	//int *p = ( int* )&a;
	//*p = 8;

	int a = 8;
	const int *p = &a;
	
	a = 9;

	int const *f = &a;
	a = 10;

	const int &b = a;
	a = 11;

	const int c = a;

	char* s = { "aaaaa" };
	char const* pointer = s;
	char* s1 = { "bbbbb" };
	pointer = s1;

	int a1 = 2;
	const int *aa1 = &a1;

	std::vector< string > vec_data;
	vec_data.push_back( "1" );
	vec_data.push_back( "2" );
	vec_data.push_back( "3" );

	std::for_each( vec_data.begin( ), vec_data.end( ), [&]( string i_data ) { cout << i_data.c_str() << ","; } );

	return 0;
}