#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* 2���� ���󿡼��� ��ǥ�� ǥ���� �� �ִ� ����ü */
typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

/* ����ü�� �������� �� ���� ���� ����ϴ� �Լ� */
Point& pntAdder(const Point& p1, const Point& p2);

/* ���������� �����ϴ� main �Լ� - new/delete ��� */
int main(void)
{
	// �����ʿ�
}