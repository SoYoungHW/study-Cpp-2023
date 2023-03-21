#include <iostream>

/* int main(void) 0. 기본
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

	return 0;
} */

/* 출력 - 함수이름 (입력) */

/* void func(void) // 1. 입출력이 없는 함수
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}
int main()
{
	func(); // 함수호출
	return 0;
} */

// 2. 입력만 있는 함수(머리형태 : 출력 함수이름(입력)
/* void func(int a, int b) // 입력만드는법 : (매개)변수를 선언
{
	int res = a + b;
	std::cout << res << std::endl;
}
int main()
{
	int a = 10; // 호출할 때 입력값을 적어줘야함
	int b = 20;
	func(a, b); // 입력으로 전달해주는 실인수(a, b)
} */

// 3. 입출력이 둘다 있는 함수
int func(int a, int b);	// 함수선언

int main() // main함수 제일 먼저 신경쓸것
{
	int a = 10;
	int b = 20;

	int res = func(a, b); // 선언해줘야 func의 res 값(리턴되는값)을 저장해서 사용
	std::cout << res << std::endl;
	std::cout << func(a, b) << std::endl; // 사용 가능(임시 객체가 생성되어 있을때)
}

int func(int a, int b)  // 함수정의
{
	int res = a + b;
	return res; // 출력은 return문으로 작성
}
/* func 함수가 main보다 밑에 있으면 에러
: 위에서 부터 내려와 func 라는 함수를 찾을 수 없기 때문에
: 그래서 main 함수 밑에 정의할 때는 함수 선언만 main 함수 위에 띄워준다*/