#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	swapByRef2(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	return 0;
}