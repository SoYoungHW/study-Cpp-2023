#include <iostream>
using std::cout;
using std::endl;

class Super
{
public:/*
	void func1() { cout << "Super::func1()" << endl; }
	void func2() { cout << "Super::func2()" << endl; }*/
	virtual void func1() { cout << "Super::func1()" << endl; }
	virtual void func2() { cout << "Super::func2()" << endl; }
	void func3() { cout << "Super::func3()" << endl; }
};

class Sub : public Super
{
public:
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }
};

int main(void)
{
	Super super;
	Sub sub;

	super.func3();
	super.func2();
	super.func1();
	cout << "---------------" << endl;
	sub.func4();
	sub.func3();
	sub.func2();
	sub.func1();

	// 오버라이딩 객체포인터를 쓸 때 문제생김 - 가상함수로 해결?
	cout << "-----포인터-----" << endl;
	Super* ps = new Sub; //  자식객체를 부모포인터로 연결
	ps->func3();
	ps->func1();
	ps->func2();
	// 포인터타입을 기준(Super)으로 출력
	// virtual 키워드를 붙이면 객체를 기준(Sub)으로 출력
	// 포인터타입보다 객체타입이 중요!
	
	delete ps;

	return 0;
}