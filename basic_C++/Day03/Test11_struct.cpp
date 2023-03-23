/* 사용자 정의 자료형인 구조체(C타입) */
#include <iostream>
using std::cout;
using std::endl;

struct Human {
	char name[20];
	int age;
}; // 멤버변수만 넣을수있음

int main(void)
{
	struct Human h = {"홍길동", 23};	// 구조체 변수선언(struct Human 타입의 h변수선언)
										// 변수 초기화(구조체 바깥에서)

	printf("이름 : %s\n", h.name);
	printf("나이 : %d\n", h.age);

	return 0;
}