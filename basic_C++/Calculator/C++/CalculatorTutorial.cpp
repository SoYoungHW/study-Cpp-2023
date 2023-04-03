// author 황소영 
#include"Calculator.h"

int main(void)
{
	double val1;
	char ch;
	double val2;

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl;
	cout << "Press 'ctrl + c' to exit the program" << endl << endl;

	while (true) // 반복
	{
		cout << "input >> ";
		cin >> val1; // 첫번째 숫자 입력
		cin >> ch;	// 연산자 입력
		cin >> val2; // 두번째 숫자 입력

		try
		{
			if (val2 == 0) throw val2; // 예외가 발생되면(0으로 나누면)
			else
			{
				Calculator cal; // 객체생성
				cal.Calculate(val1, ch, val2); // 계산함수 실행
				cal.ShowCalculate(); // 결과출력함수 실행
			}
		}
		catch (double ex) // 예외처리
		{
			cout << "-----ERROR-----" << endl;;
			cout << ex << "으로 나눌 수 없습니다." << endl << endl;
		}
	}

	return 0;
}