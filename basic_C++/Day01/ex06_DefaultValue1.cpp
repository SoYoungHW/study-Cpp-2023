#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl; // 앞에서부터(num1)에 적용됨, 뒤(num2)에는 디폴트값 적용
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}