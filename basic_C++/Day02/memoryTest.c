#include <stdio.h>

int g = 0; // 전역변수

void func(void) // 함수는 일반적으로 전역함수
{
	printf("func() : %p\n", func); // 매개변수 2개
}

int main(void)
{
	int n = 10; // 지역변수
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("local n : %p\n", &n); 
	printf("global g : %p\n", &g);
	printf("static c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", &ary);

	return 0;
}

/* 
메모리 영역은 크게 나누면
1. 코드세그먼트 - 함수위치, 메인함수 - 전역함수(func()) - 지역함수(printf())
2. 데이터세그먼트
2-1. 동적 데이터 영억 스택영역(지역변수.. / 힙영역

2-2. 정적 데이터영역 / 상수, 전역변수..(프로그램 시작~끝 존재하는 것들)

실행이 끝나면 스택영역 반환
*/