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

	// �������̵� ��ü�����͸� �� �� �������� - �����Լ��� �ذ�?
	cout << "-----������-----" << endl;
	Super* ps = new Sub; //  �ڽİ�ü�� �θ������ͷ� ����
	ps->func3();
	ps->func1();
	ps->func2();
	// ������Ÿ���� ����(Super)���� ���
	// virtual Ű���带 ���̸� ��ü�� ����(Sub)���� ���
	// ������Ÿ�Ժ��� ��üŸ���� �߿�!
	
	delete ps;

	return 0;
}