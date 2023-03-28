#include <iostream>
using std::cout;
using std::endl;

void Static_Counter()
{
	static int cnt; // 데이터 영역에 할당(프로그램이 끝나면 사라짐)
	cnt++;
	cout << "Current Static cnt : " << cnt << endl;
} // 함수가 끝나도 cnt 사라지지않음

void Counter()
{
	int cnt = 0;
	cnt++;
	cout << "Current cnt : " << cnt << endl << endl;
} // 함수 끝남과 동시에 사라짐

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Static_Counter(); // 데이터영역에 저장된 cnt를 불러옴
		Counter(); // cnt 매번 새로 생성됨
	}
	return 0;
}