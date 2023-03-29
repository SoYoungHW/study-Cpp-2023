#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Person
{
private:
	int age; // ����
	char name[50]; // �̸�

public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50]; // ��������

public:
	UnivStudent(const char* myname, int myage, const char* mymajor)
		: Person(myage, myname) // �ڽ�Ŭ�������� �θ�Ŭ���� ��������� �ٷ� �ʱ�ȭ�Ұ�
								// �θ�Ŭ������ �����ڸ� �ҷ��� �ʱ�ȭ
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 20, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electrotic eng.");
	ustd2.WhoAreYou();

	return 0;
}