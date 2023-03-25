/* 사용자로부터 총 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램 - 답안 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int val;
	int result = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << " 번째 정수 입력 : ";
		cin >> val;
		result += val;
	}

	cout << "합계 : "<< result << endl;
	return 0;
}