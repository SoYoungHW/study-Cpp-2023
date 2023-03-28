#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* 2차원 평면상에서의 좌표를 표현할 수 있는 구조체 */
typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

/* 구조체를 바탕으로 두 점의 합을 계산하는 함수 */
Point& pntAdder(const Point& p1, const Point& p2);

/* 덧셈연산을 진행하는 main 함수 - new/delete 사용 */
int main(void)
{
	// 복습필요
}