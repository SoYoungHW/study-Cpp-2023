#include <iostream>
int main(void)
{
	int val1; // 초기화를 안시키면 과거에는 쓰레기값이 저장돼있었으나, 현재는 0이 저장되어있음
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과 : " << result << std::endl; // 다른 자료형태라도 한 라인에 출력가능(C에서는 X)
	return 0;
}