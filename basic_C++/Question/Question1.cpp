/* 사용자로부터 총 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int val1, val2, val3, val4, val5;

	cout << "1번째 정수 입력 : ";
	cin >> val1;

	cout << "2번째 정수 입력 : ";
	cin >> val2;

	cout << "3번째 정수 입력 : ";
	cin >> val3;

	cout << "4번째 정수 입력 : ";
	cin >> val4;

	cout << "5번째 정수 입력 : ";
	cin >> val5;

	int result = val1 + val2 + val3 + val4 + val5;
	cout << "합계 : " << result << endl;
	return 0;
}


