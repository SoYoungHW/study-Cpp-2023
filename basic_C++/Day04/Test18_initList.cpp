/* 콜론초기화가 필요한 경우 
- 상수, 참조, 객체, (일반적인 멤버변수도 가능) */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class ConstSome
{
public:
	const int val; /* 1. 상수 멤버 변수 */
	ConstSome(int n) : val(n) {}
	void printval()
	{
		cout << val << endl;
	}
};

class RefSome
{
public:
	int& ref; /* 2. 참조 멤버 변수 */
	RefSome(int n) : ref(n) {}
	void printref()
	{
		cout << ref << endl;
	}
};

class Position
{
public:
	int x, y;
	Position(int ax, int ay)
	{
		x = ax;
		y = ay;
	}
};

class ObjectSome
{
public:
	Position pos; /* 3. 객체 멤버 변수 */
	ObjectSome(int ax, int ay) : pos(ax, ay) {}
	void printobj()
	{
		cout << pos.x << ' ' << pos.y << endl;
	}
};
int main(void)
{
	ConstSome c(20);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printref();

	ObjectSome o(10, 20);
	o.printobj();

	return 0;
}