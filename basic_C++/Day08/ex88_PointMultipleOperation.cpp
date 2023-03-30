#include <iostream>
using std::cout;
using std::endl;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) {}
	void ShowPosition()
	{
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
};

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3;
	// cpy = 3 * pos 는 불가
	// 3.operator*(pos)로 해석불가능
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();

	return 0;
}