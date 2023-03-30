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
	virtual void vfunc() // �����Լ� -> ������ ���� �������̺� ��� -> ��Ÿ�ӿ��� ȣ�����
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
	void vfunc() // �����Լ�
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
	Ctest* cp = new	CtestSub(3, 33); // delete ���ϸ� �Ҹ���ȣ��X
	cout << "--------------------" << endl;
	delete cp; 
	// cp��� �θ�Ŭ����Ÿ���� �����͸� delete �ϱ� ������
	// �θ�Ŭ���� �Ҹ��ڸ� ȣ���(�ڽ�Ŭ������ ������)
	// -> ����Ҹ��� ���
	// �ڽ�Ŭ������ �Ҹ��ڿ� ���ٰ���


	return 0;
}
