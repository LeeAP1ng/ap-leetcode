﻿#pragma once
/*
给你一个 32 位的有符号整数 x ，返回 x 中每位上的数字反转后的结果。
如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。
假设环境不允许存储 64 位整数（有符号或无符号）。
来源：力扣（LeetCode）No.7
*/

class Reverse
{
public:
	Reverse( );
	~Reverse( );

public:
	int reverse( int x );
};