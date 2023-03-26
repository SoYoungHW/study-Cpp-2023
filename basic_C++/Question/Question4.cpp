/* 판메원들의 급여 계산 프로그램
- 판매원에게 매달 50만원의 기본급과 물품판매가격의 12%에 해당하는 돈을 지급
- 이러한 급여의 계산은 -1이 될때까지 계속 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int CalSales(int sales);

int main(void)
{
	int sales;

	while (true)
	{
	cout << "판매 금액을 만원단위로 입력 : ";
	cin >> sales;
	cout << "이번 달 급여 : " << CalSales(sales) << " 만원" << endl;

	if (sales == -1)
		break;
	}

	cout << "프로그램을 종료합니다." << endl;

	return 0;
}

int CalSales(int sales)
{
	return 50 + (sales * 0.12);
}