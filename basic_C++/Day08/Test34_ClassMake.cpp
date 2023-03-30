#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using std::cout;
using std::endl;

class Person
{
private:
	char name[30];
	int birthday;

public:
	Person(const char* myname, int mybirthday) : birthday(mybirthday)
	{
		strcpy(name, myname);
	}
	void ShowPerson()
	{
		cout << "이름 : " << name << endl;
		cout << "생년월일 : " << birthday << endl << endl;
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