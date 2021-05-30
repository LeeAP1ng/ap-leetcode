#pragma once

template <typename T>
class MyPtr
{
public:
	MyPtr( T *p = nullptr ) :m_ptr( p ) {};
	MyPtr( MyPtr &mp ) :m_ptr( mp.m_ptr )
	{
		mp.m_ptr = nullptr;
	}

	MyPtr& operator = ( MyPtr & mp )
	{
		m_ptr = mp.m_ptr;
		mp.m_ptr = nullptr;
	}

	~MyPtr( )
	{
		if( m_ptr != nullptr )
		{
			delete m_ptr;
		}
	}

	const T& operator * ( ) const
	{
		return *m_ptr;
	}

	T& operator *( )
	{
		return *m_ptr;
	}

	const T& operator -> ( ) const
	{
		return m_ptr;
	}

	T& operator ->( )
	{
		return m_ptr;
	}

private:
	T *m_ptr;
};


template <typename T> Class SmartPtr;
template<typename T>
class Ptr
{
	friend class SmartPtr<T>;

	T *m_ptr;
	size_t m_count;

	Ptr( T* p = nullptr ) :m_ptr( p ), m_count( 1 ) {};
};



#include <iostream>
using namespace std;

class Radius
{
	friend class Circle; //����CircleΪRadius����Ԫ��  
	friend void Show_r(Radius &n); //����Show_rΪ��Ԫ����  
public: 
	Radius(int x)
	{  r = x;  }
	~Radius()
	{  }
private: 
	int r; 
};  
void Show_r(Radius &n) 
{  
	cout<<"Բ�İ뾶Ϊ: "<<n.r<<endl; //����Radius�����˽�г�Ա����r  
} 
class Circle
{  
public:  
	Circle() {} 
	~Circle(){}  
	double area(Radius a) 
	{  
		s = a.r * a.r * 3.1415926; //����Radius�����˽�г�Ա����r 
		return s;  
	}  
private:  
	double s;  
}; 
int main(int argc, char *argv[])  
{  
	Radius objRadius(9);  
	Circle objCircle;  
	Show_r( objRadius );  
	cout<<"���Ϊ��"<<objCircle.area(objRadius)<<endl;  
	return 0;  
} 