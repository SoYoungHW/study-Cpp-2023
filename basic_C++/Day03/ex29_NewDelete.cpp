#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

char* MakeStrAdr(int len)
{
	char* str = new char[len]; // ������ ȣ��
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	delete[] str; // �Ҹ��� ȣ��
	return 0;
}