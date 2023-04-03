// È²¼Ò¿µ
#include "Calculator_v1.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(void)
{
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl;
	cout << "Press 'ctrl + c' to exit the program" << endl << endl;
	
	while (true)
	{
		string str = " ";
		cout << "input >> ";
		cin >> str;

		Calculator_v1 calv1;
		cout << calv1.Calculate_v1(str) << endl << endl;
	}

	return 0;
}
