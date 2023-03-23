/* 메모리 동적할당(C타입-c++에서 사용은가능)
배열, 문자열 등을 주로 힙영역에 할당 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{	
	int* arr;
	int size; // 받을수있는 크기보다 많이 입력하면 에러, scanf_s 안전장치
	printf("배열 방의 개수 : ");
	scanf_s("%d", &size); // scanf로 입력받을 때는 주소연산자 써야함

	arr = (int*)malloc(sizeof(int)); // 힙영역에 메모리 할당(숫자로써도무방)

	printf("만들어진 배열 크기 : %d\n", sizeof(int) * size);
	printf("%d\n", sizeof(int));

	free(arr); // 할당된 메모리 해제해야함(메모리낭비를 막기위해)
	return 0;	// 할당된 메모리의 시작주소 리턴
}