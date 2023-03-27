#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		this->name = new char[len];
		strcpy(this->name, myname);
		age = myage;
	}
	Person(const Person& copy)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		age = copy.age;
	}
	void ShowPersomInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[] this->name;
		cout << "Called destructor" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersomInfo();
	man2.ShowPersomInfo();

	return 0;
}