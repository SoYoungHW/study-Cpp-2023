#include <iostream> // 전처리기가 해석

/* 매크로 함수 : 전처리가 해석하는 함수
장점 : 실행이 빠름, 자료형 필요 없음
주의 : 연산 오류가 날 수도 있음, 괄호로 묶어줘야 함 */
#define SUM(x, y)	x + y
#define SQUARE(x) x * x
#define SQUARE1(x) (x) * (x)

void func()
{

}

int main(void) // 컴파일러가 해석
{
	std::cout << SUM(10.1, 20.2) << std::endl;
	// --> std::cout << x + y << std::endl;
	// 매크로 함수는 점프하지않고 코드가 바로 적용됨(코드안에서 바로 실행!)
	func(); // 해당 함수로 점프(분기) -> 함수 실행시키고 위치로 돌아옴
	std::cout << SQUARE(10) << std::endl;
	std::cout << SQUARE(10 + 1) << std::endl; // 10 + 1 * 10 + 1 = 21 *를 먼저계산
	std::cout << SQUARE1(10 + 1) << std::endl; // (10+1) * (10+1) = 121

	return 0;
}
