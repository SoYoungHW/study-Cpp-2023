/* const - 상수화시켜서 값을 함부로 수정할 수 없게 만듦 */
#include <stdio.h> // C소스의 헤더파일

int main(void) 
{
//	int num = 10; // 0.기본
//	printf("num: %d\n", num); // %d출력서식, num출력값

//	num = 20;
//	printf("num : %d\n", num);

	// 1.const 키워드 사용 
	const int num = 20; // 상수화는 선언과 동시에 초기화해야함(쓰레기값이 들어가기때문)
	printf("num : %d\n", num);
	// num = 20;
	
	// 2.포인터 변수
	int* p = &num; // p포인터 &주소연산자 -> num이라는 변수의 주소를 p라는 포인터에 집어넣어라
				   // *를 붙이면 포인터변수(주소를 저장) // 선언부분 *은 그냥 기호
	printf("p에 저장된 값 : %p\n", p);
	printf("p가 참조하는 값 : %d\n", *p);
	*p = 100; // * (간접)참조연산자 : 포인터가 가리키는 주소에 저장된 값(데이터)을 반환
	printf("p가 가리키는 곳의 데이터값 : %d\n", *p); // 포인터를 통해 값 변경가능
	printf("num 바뀐값 : %d\n", num);
	/* 포인터 기호 *와 참조연산자 *를 헷갈리지 말것! */
	
	const int num1 = 10;
	printf("num1 : %d\n", num1);

	int* p1 = &num1;
	*p1 = 100;
	printf("num1 바뀐값 : %d\n", num1); // 상수화 시켜도 포인터를 통해 값 변경가능

	int num2 = 100;
	int num3 = 200;
	const int* pa = &num2; // 데이터값 상수화
	printf("pa : %p\n", pa);
	pa = &num3;
	printf("변경후 pa : %p\n", pa);

	// *pa = 50; 데이터값 변경 불가
	int* const pb = num2; // 포인터변수 자체를 상수화(주소값상수화)
	// pb = &num2;
	*pb = 70; // 참조를 통해 데이터값 변경 가능

	
	return 0;
}

