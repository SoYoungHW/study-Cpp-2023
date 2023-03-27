#include <iostream>
using std::cout;
using std::endl;

class Temprary
{
private:
	int num;

public:
	Temprary(int n) : num(n)
	{
		cout << "create obj" << num << endl;
	}
	~Temprary()
	{
		cout << "destroy obj" << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temprary(100); // 임시객체(변수이름없음)생성 // 임시객체소멸(소멸자호출)
	cout << "********** after make!" << endl << endl;

	Temprary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl ;
	
	const Temprary& ref = Temprary(300); // 임시객체 참조형태로 받음(저장)
	cout << "********** end of make!" << endl << endl;

	return 0; // ref 소멸
}