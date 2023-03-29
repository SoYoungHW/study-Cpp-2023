/* ����ü ���� �Լ������ϱ� */
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

/* 2���� ���󿡼� ��ǥ�� ���� �� �ִ� ����ü */
struct Point
{
	int xpos;
	int ypos;

	// ������ �Լ��� ����ü �ȿ� �����ϱ�
	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	} // ���� ��ǥ�̵�

	void AddPoint(const Point& pos) // ���� ��ǥ����
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPosition()
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}// ���� x, y ��ǥ���� ���
};

/* �����Լ� */
int main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); // [5, 14] ���

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); // [25, 44] ���

	return 0;
}