#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int a, b, c, d;
	cout << "수를 입력하세요 > ";
	cin >> a;
	cout << "나눌 수를 입력하세요 > ";
	cin >> b;

	try 
	{
		if (b == 0) throw b; // 예외가 발생되면

		else 
		{
			c = a / b;
			cout << "몫 : " << c << endl;
			d = a % b;
			cout << "나머지 :" << d << endl;
		}
	}
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없습니다. *예외발생*" << endl;
		cout << "예외가 발생되어도 정상종료" << endl;
	}
	
	return 0;
}