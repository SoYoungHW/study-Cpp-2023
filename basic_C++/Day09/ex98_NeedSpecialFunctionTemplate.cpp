#include <iostream>
using std::cout;
using std::endl;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b; // 삼항연산자
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl; // 아스키코드값으로 비교(알파벳순서)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	return 0;
}