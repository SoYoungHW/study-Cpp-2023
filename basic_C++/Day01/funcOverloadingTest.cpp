#include <iostream>

/* C������ �Լ��̸����� �Լ�����(�̸� ��ġ�� �ȵ�) */
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
/* C++������ �Լ��̸��� �Ű������� �Լ�����
(�̸����Ƶ� �Ű������� �ٸ��� �ٸ��Լ� ���) */