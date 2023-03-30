/* �����Ҵ� �߰� */
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
		char* name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	Person(const Person& copy) : birthday(copy.birthday)
	{
		char* name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void ShowPerson()
	{
		cout << "�̸� : " << name << endl;
		cout << "������� : " << birthday << endl << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "�Ҹ���ȣ��" << endl;
	}
};

int main(void)
{
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();
	
	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	return 0;
}
