#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

class Person
{
private:
	char* name;

public:
	Person(const char* myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person()
	{
		cout << name << " name ¼Ò¸ê" << endl;
		delete[]name;
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStdent : public Person
{
private:
	char* major;

public:
	UnivStdent(const char* myname, const char* mymajor) : Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStdent()
	{
		cout << major << " major ¼Ò¸ê" << endl;
		delete[]major;
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStdent st1("kim", "Mathematics");
	st1.WhoAreYou();
	UnivStdent st2("Hong", "Physics");
	st2.WhoAreYou();

	return 0;
} // ¼Ò¸ê »ý¼º°ú ¹Ý´ë¼ø¼­(Last In First Out)