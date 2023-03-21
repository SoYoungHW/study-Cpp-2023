#include <iostream>
/* 인라인 함수
자료형에 의존적
컴파일러가 인라인화를 판단(성능에 해가 된다고 생각할 경우 무시하기도 함 */
inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	// --> std::cout << 5 * 5 << std::endl; // 코드가 길면 메모리 많이 사용
	std::cout << SQUARE(12) << std::endl;

	return 0;
}
