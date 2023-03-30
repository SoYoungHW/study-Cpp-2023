#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
private:
	int value;
	
public:
	MyClass(int val) : value(val) {}
	MyClass operator+(const MyClass& other) const // 입출력 - 객체(입력에 참조형태) 
	{
		return MyClass(value + other.value);
	} // 값의 변경여지를 없애기위해 const(const 함수)
	void print() { cout << value << endl; }
};

int main(void)
{
	MyClass a(10);
	a.print();

	MyClass b(a); // b=a
	b.print();

	MyClass c = b;
	c.print();

	MyClass d = a + b + c;
	d.print();
	// +연산자는 객체더하기 지원 안함(기능X)
	// -> +연산자를 오버로딩(객체끼리 더할수있는 기능을 가지게 만들어줘야함-다중정의)
	// public 영역에 생성


	return 0;
}