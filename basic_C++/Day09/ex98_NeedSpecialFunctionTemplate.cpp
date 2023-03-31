#include <iostream>
using std::cout;
using std::endl;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b; // ���׿�����
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl; // �ƽ�Ű�ڵ尪���� ��(���ĺ�����)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	return 0;
}