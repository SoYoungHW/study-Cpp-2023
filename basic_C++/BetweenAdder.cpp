#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0; // 누적 기능을 가진 지역변수는 초기화 시켜줘야 함
	std::cout << "두 개의 숫자입력 :";
	std::cin >> val1 >> val2; // 입력기능에 문자열 사용불가(cout 따로 해줘야함)

	if (val1 < val2) // 선택제어문(if문, switch문)
{
		for (int i = val1 + 1; i < val2; i++) // 반복제어문(for문, while문)
			result += i;
		/* for(초기식; 조건식; 증감식;){
		} 초기식 -> 증감 -> 실행 -> 조건 (조건이 거짓이면 for문 빠져나옴)*/
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	
	std::cout << "두 수 사이의 정수 합 :" << result << std::endl;
	return 0;
}