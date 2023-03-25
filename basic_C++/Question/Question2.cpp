/* 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력받아서,
입력받은 데이터를 그대로 출력하는 프로그램 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	char Name[10];
	char phoneNum[15];

	cout << "이름을 입력하세요 : ";
	cin >> Name;
	cout << "전화번호를 입력하세요 : ";
	cin >> phoneNum;

	cout << "이름 : " << Name << endl;
	cout << "전화번호 : " << phoneNum << endl;

	return 0;
}