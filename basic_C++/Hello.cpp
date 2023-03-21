#include <iostream>

/*void main() - 리턴없음*/
/*4바이트 = 32비트, 1바이트 = 8비트*/

int main(void)		// 함수머리 - 출력, 함수이름(입력) // 정수int, 문자char
{					// 함수시작(몸체)
	int num = 20;		// 변수선언(지역변수)
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14;
	std::cout << "hi" << std::endl;

	return 0;		// 리턴										
}					// 함수끝

/* 20 = num; 불가(20은 상수라서)
   왼쪽에는 변수(상수가 올 수X, 저장할수 있는 공간이 와야함)
   오른쪽에는 상수 OR 변수 */

