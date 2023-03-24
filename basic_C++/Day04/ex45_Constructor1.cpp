#include <iostream>
using std::cout;
using std::endl;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	/* 생성자 오버로딩 */
	SimpleClass() // 디폴트 생성자
	{
		cout << "디폴트 생성자" << endl;
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n) // 인수하나를 갖는 생성자
	{
		cout << "인수하나 생성자" << endl;
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2) // 인수두개를 갖는 생성자
	{
		cout << "인수두개 생성자" << endl;
		num1 = n1;
		num2 = n2;
	}

	/* SimpleClass(int n1=0, int n2=0) 디폴트값 설정
	{
		num1 = n1;
		num2 = n2;
	} 생성하면 디폴트 생성자 덮어씀 */

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();

	return 0;
}