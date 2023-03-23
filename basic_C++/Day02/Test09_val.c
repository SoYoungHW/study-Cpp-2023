#include <stdio.h>
/* 변수 : 메모리 공간을 할당하여 그 안의 값을 변화가능 */

int main(void)
{
	int num = 10; // 초기화
	int num1; // 선언
	num = 20; // 대입
	num = 30;
	printf("int크기 : %d\n", sizeof(num)); // 정수타입(4바이트)

	char ch; // 문자타입(1바이트)
	printf("char크기 : %d\n", sizeof(char));

	double d = 3.14; // 실수타입(8바이트)
	printf("double크기 : %d\n", sizeof(double));

	char cha = 0x7f; // 0x표기 16진법 0~9abcdef(4비트)
					 // 2진법 0111 1111(8비트) - 8 4 2 1, 제일왼쪽 최상위비트=부호비트
							   // 부호비트에 들어온 값이 0=양수 1=음수
	unsigned char cha1 = 0x7f; // 부호비트를 일반비트로 사용
	
	printf("cha : %x\t cha : %d\n", cha, cha);
	printf("cha1 : %x\t cha1 : %d\n", cha1, cha1);

	char ch2 = 0x9f; // 음수도 사용가능, -128 ~ 0 ~ +127  ffffff(부호비트의값)9f
	unsigned char uch2 = 0x9f; // unsigned부호없음(무조건양수), 0~255(1바이트에 256가지 경우의 수 가능)
	printf("ch2 : %x\t ch2 : %d\n", ch2, ch2);
	printf("uch2 : %x\t uch2 : %d\n", uch2, uch2);
					  // 1001 1111 << 1 : 0011 1110, 맨오른쪽 값은 비워짐
	uch2 = uch2 << 1; // << 비트연산자, uch2를 왼쪽으로 1비트만큼 이동
	printf("uch2 << 1 : %x\n", uch2);

	ch2 = ch2 << 1;
	printf("ch2 << 1 : %x\n", ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("ch2 >> 1 : %x\t uch2 >> 1 : %x\n", ch2, uch2);

	return 0;
}