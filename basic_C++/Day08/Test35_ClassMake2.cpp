/* 동적할당 추가 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Person
{
private:
	char* name;
	int birthday;

public:
	Person(const char* myname, int mybirthday) : birthday(mybirthday)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	Person(const Person& copy) : birthday(copy.birthday)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void ShowPerson()
	{
		cout << "이름 : " << name << endl;
		cout << "생년월일 : " << birthday << endl << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "소멸자호출" << endl;
	}
};

int main(void)
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();
	
	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	return 0;
}
