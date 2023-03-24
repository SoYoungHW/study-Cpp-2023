/* �ݷ��ʱ�ȭ�� �ʿ��� ��� 
- ���, ����, ��ü, (�Ϲ����� ��������� ����) */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class ConstSome
{
public:
	const int val; /* 1. ��� ��� ���� */
	ConstSome(int n) : val(n) {}
	void printval()
	{
		cout << val << endl;
	}
};

class RefSome
{
public:
	int& ref; /* 2. ���� ��� ���� */
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
	Position pos; /* 3. ��ü ��� ���� */
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