#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class MyClass
{
private :
	int num;
public:
	MyClass(int n) : num(n)
	{
		cout << "생성자 호출" << endl;
	}
	MyClass(const MyClass &other)	// 참조형, 원본 변경 방지
	{
		cout << "복사생성자 호출" << endl;
		num = other.num;
	}
	void getData()
	{
		cout << num << endl;
	}
};

int main(void)
{
	MyClass m1(10);
	MyClass m2 = m1;
	MyClass m3(m2);

	m1.getData();
	m2.getData(); // 복사생성자 호출, int num2 = num1, C타입
	m3.getData(); // 복사생성자 호출, C++타입 
				  // 얕은 복사

	return 0;
}

/*	1. 복사생성자의 매개변수는 참조형(객체타입이 오면 무한루프에 빠짐)
	2. 자동으로 만들어짐(디폴트 복사생성자) - 힙영역에 메모리를 할당받을 때(new) 문제가 생김 
		- 얕은 복사 */

