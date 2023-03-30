/* 함수포인터(fp)
- 동일한 타입(형태)의 여러 함수가 구현되어있을때 쓰면 편함 */
#include <iostream>

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int main(void)
{
	int res;
	int (*fp) (int, int); // 함수포인터 선언

	fp = add;
	res = fp(10, 20);
	std::cout << res << std::endl;

	fp = sub;
	res = fp(10, 10);
	printf("%d\n", res);

	printf("%p\n", add); // add함수의 주소값

	return 0;
}