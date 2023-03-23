/* 메모리 동적할당 C++ 타입 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int size;
	int* arr; // 할당 메모리 시작주소 리턴
	cout << "배열의 개수를 입력하세요 : ";
	cin >> size;

	arr = new int[size]; // 메모리 할당

	for (int i = 0; i < size; i++) 
	{
		cout << i + 1 << " 번째 숫자 : ";
		cin >> arr[i];
	}

	delete[] arr;
	return 0;
}