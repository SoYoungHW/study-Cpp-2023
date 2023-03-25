#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class person
{
private:
	char* name; // const 안 적어도 됨
	int age;
	=
public:
	person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	person man1("Lee dong woo", 29);
	person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
