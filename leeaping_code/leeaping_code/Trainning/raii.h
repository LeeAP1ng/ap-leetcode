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
	friend class Circle; //声明Circle为Radius的友元类  
	friend void Show_r(Radius &n); //声明Show_r为友元函数  
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
	cout<<"圆的半径为: "<<n.r<<endl; //调用Radius对象的私有成员变量r  
} 
class Circle
{  
public:  
	Circle() {} 
	~Circle(){}  
	double area(Radius a) 
	{  
		s = a.r * a.r * 3.1415926; //调用Radius对象的私有成员变量r 
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
	cout<<"面积为："<<objCircle.area(objRadius)<<endl;  
	return 0;  
} 