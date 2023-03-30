#include <iostream>
using std::cout;
using std::endl;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y =0) : xpos(x), ypos(y) {}
	void ShowPosition()
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	Point& operator++() // ��������
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point& operator++(int) // ��������
	{
		const Point temp(xpos, ypos); // temp ��ü���� (���� ����ϰ� �����ؾ��ϴϱ�)
		xpos += 1;
		ypos += 1;
		return temp;
	}
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref)  // ��������
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point& ref, int) // ��������
{
	const Point temp(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return temp;
}

int main(void)
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}