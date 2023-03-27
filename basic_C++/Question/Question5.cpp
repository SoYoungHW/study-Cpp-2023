/* swap 함수 오버로딩 구현 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap(double* a, double* b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double db1 = 1.111, db2 = 5.555;
	swap(&db1, &db2);
	cout << db1 << ' ' << db2 << endl;
}