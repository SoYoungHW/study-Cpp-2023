#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

char* MakeStrAdr(int len)
{
	char* str = new char[len]; // 생성자 호출
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	delete[] str; // 소멸자 호출
	return 0;
}