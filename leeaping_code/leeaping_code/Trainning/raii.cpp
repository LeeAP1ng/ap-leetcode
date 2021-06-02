#include "raii.h"

//memcpy �����ĵײ�ԭ��
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
	if( dst_pos < src_pos + size && dst > src )//��ǰ����
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
		//��󿽱�
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
	//	// ���ֵ�ַ�ص���������Ժ���ǰ����
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

//strcpy�ĺ���ʵ��
char* strcpy( char* dst, const char* src )
{
	if( dst == NULL || src == NULL )
		return dst;
	
	char* ret = dst;

	while( (*dst++ = *src++) != '\0' );
	return ret;
}

/*volatile�������Ϊ������������ָʾ�֡������ڸ��߱�����ÿ��ȡֵ����ȥ�ڴ���ȡ������ֵ��
volatile��Ҫ�����ο��ܱ�����̷߳��ʵı�����
volatileҲ�������ο��ܱ�δ֪�����޸ĵı���
*/


/*���������㷨*/
//���ֲ���
int dichotomy( int arr[], int len, int num )
{
	int front = 0, end = len, mid = 0;
	while( front < end )
	{
		mid = (front + end) / 2;
		if( arr[mid] == num )
		{
			return mid;
		}
		else if( arr[mid] > num )
		{
			end = mid - 1;
		}
		else if( arr[mid] < num )
		{
			front = mid + 1;
		}
	}
	return NULL;

	int front = 0, end = len, mid = 0;
	while( front < end )
	{
		mid = (front + end) / 2;
		if( arr[mid] == num )
		{
			return mid;
		}
		else if( arr[num] > num )
		{
			end = mid - 1;
		}
		else if( arr[mid] < num )
		{
			front = mid + 1;
		}
	}

	return NULL;
}