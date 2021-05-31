#include "raii.h"

//memcpy 函数的底层原理
void* memcpy( void* dst, const void * src, size_t size )
{
	if( dst == NULL || src == NULL || size <= 0 )
		return dst;
	char* dst_pos = ( char* )dst;
	char* src_pos = ( char* )src;

	while( size > 0 )
	{
		*dst_pos++ = *src_pos++;
		size--;
	}

	return dst;
}

void* my_memcpy( void* dst, const void* src, size_t size )
{
	if( dst == NULL || src == NULL || size <= 0 )
		return dst;

	char* dst_pos = ( char* )dst;
	char* src_pos = ( char* )src;
	if( dst_pos < src_pos + size && dst > src )//向前拷贝
	{
		dst_pos = dst_pos + size;
		src_pos = src_pos + size;

		while( size > 0 )
		{
			*dst_pos-- = *src_pos--;
			size--;
		}
	}
	else
	{
		//向后拷贝
		while( size > 0 )
		{
			*dst_pos++ = *src_pos++;
			size--;
		}
	}
	return dst;
}


void* memmove( char* dst, const char* src, size_t size )
{
	//char* psrc;
	//char* pdst;

	//if( NULL == dst || NULL == src )
	//	return dst;

	//if( (src < dst) && ( char* )src + size > ( char* )dst )
	//{
	//	// 出现地址重叠的情况，自后向前拷贝
	//	psrc = ( char * )src + size - 1;
	//	pdst = ( char * )dst + size - 1;
	//	while( size-- )
	//	{
	//		*pdst-- = *psrc--;
	//	}
	//}
	//else
	//{
	//	psrc = ( char * )src;
	//	pdst = ( char * )dst;
	//	while( size-- )
	//	{
	//		*pdst++ = *psrc++;
	//	}
	//}

	//return dst;

	char* psrc;
	char* pdst;
	if( NULL == dst || NULL == src )
		return dst;

	if( (src < dst) && ( char* )src + size > ( char* )dst )
	{
		psrc = ( char* )src + size - 1;
		pdst = ( char* )dst + size - 1;
		while( size > 0 )
		{
			*pdst-- = *psrc--;
			size--;
		}
	}
	else
	{
		psrc = ( char* )src;
		pdst = ( char* )dst;
		while( size > 0 )
		{
			*pdst++ = *psrc++;
			size--;
		}
	}

	return dst;
}

//strcpy的函数实现
char* strcpy( char* dst, const char* src )
{
	if( dst == NULL || src == NULL )
		return dst;
	
	char* ret = dst;

	while( (*dst++ = *src++) != '\0' );
	return ret;
}