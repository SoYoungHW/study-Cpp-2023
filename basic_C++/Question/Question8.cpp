/* SwapPointer 함수 정의 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void SwapPointer(int *val1, int *val2)
{
	int temp;
	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* par2 = &num2;
	cout << "변경 전 " << endl;
	cout << "num1 : " << num1 << "  num2 : " << num2 << endl << endl;

	SwapPointer(ptr1, par2);

	cout << "변경 후 " << endl;
	cout << "num1 : " << num1 << "  num2 : " << num2 << endl;

	return 0;
}