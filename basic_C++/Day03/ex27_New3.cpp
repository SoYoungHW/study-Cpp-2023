/* �޸� �����Ҵ� C++ Ÿ�� */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int size;
	int* arr; // �Ҵ� �޸� �����ּ� ����
	cout << "�迭�� ������ �Է��ϼ��� : ";
	cin >> size;

	arr = new int[size]; // �޸� �Ҵ�

	for (int i = 0; i < size; i++) 
	{
		cout << i + 1 << " ��° ���� : ";
		cin >> arr[i];
	}

	delete[] arr;
	return 0;
}