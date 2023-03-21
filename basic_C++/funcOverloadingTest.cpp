#include <iostream>

/* C에서는 함수이름으로 함수구별(이름 겹치면 안됨) */
void func()
{
	// std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a)
{
	// std::cout<< "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	// std::cout<< "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(char a)
{
	// std::cout<< "func(a)" << std::endl;
	printf("func(a)\n");
}

int main(void)
{
	int n = 10, n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}
/* C++에서는 함수이름과 매개변수로 함수구별
(이름같아도 매개변수가 다르면 다른함수 취급) */