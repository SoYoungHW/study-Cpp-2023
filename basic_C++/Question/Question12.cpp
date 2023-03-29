/* 구조체 내에 함수정의하기 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

/* 2차원 평면상에서 좌표를 구할 수 있는 구조체 */
struct Point
{
	int xpos;
	int ypos;

	// 다음의 함수를 구조체 안에 정의하기
	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	} // 점의 좌표이동

	void AddPoint(const Point& pos) // 점의 좌표증가
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPosition()
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}// 현재 x, y 좌표정보 출력
};

/* 메인함수 */
int main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); // [5, 14] 출력

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); // [25, 44] 출력

	return 0;
}