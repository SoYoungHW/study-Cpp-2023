#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Person
{
private:
	int age; // 나이
	char name[50]; // 이름

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
	char major[50]; // 전공과목

public:
	UnivStudent(const char* myname, int myage, const char* mymajor)
		: Person(myage, myname) // 자식클래스에서 부모클래스 멤버변수를 바로 초기화불가
								// 부모클래스의 생성자를 불러서 초기화
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