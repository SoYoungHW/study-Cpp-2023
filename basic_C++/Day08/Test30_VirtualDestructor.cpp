#include <iostream>
using std::cout;
using std::endl;

class Ctest
{
private:
	int num;

public:
	Ctest(int n) : num(n)
	{
		cout << num << " Ctest Constructor" << endl;
	}
	virtual ~Ctest()
	{
		cout << "Ctest Destructor" << endl;
	}
	void func()
	{
		cout << "Ctest func()" << endl;
	}
	virtual void vfunc() // 가상함수 -> 선언한 순간 가상테이블에 등록 -> 런타임에서 호출결정
	{
		cout << "Ctest vfunc()" << endl;
	}
};

class CtestSub : public Ctest
{
private:
	int subn;
public:
	CtestSub(int n, int sn) : Ctest(n), subn(sn)
	{
		cout << subn << " CtestSub Construtor" << endl;
	}
	~CtestSub()
	{
		cout << "CtestSub Destructor" << endl;
	}
	void vfunc() // 가상함수
	{
		cout << "Ctestsub vfunc()" << endl;
	}
};

int main(void)
{
	/*Ctest ct(1);
	cout << "--------------------" << endl;
	CtestSub cs(2, 3);
	cout << "--------------------" << endl;*/
	Ctest* cp = new	CtestSub(3, 33); // delete 안하면 소멸자호출X
	cout << "--------------------" << endl;
	delete cp; 
	// cp라는 부모클래스타입의 포인터를 delete 하기 때문에
	// 부모클래스 소멸자만 호출됨(자식클래스는 가려짐)
	// -> 가상소멸자 사용
	// 자식클래스의 소멸자에 접근가능


	return 0;
}
