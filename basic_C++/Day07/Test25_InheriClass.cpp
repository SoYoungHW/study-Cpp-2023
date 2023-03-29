/* ��Ӽ��� */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Person
{
private:
	char name[10];
	int age;

public:
	Person(const char*, int);
	void getData();

}; // �߻�ȭ(Ư¡���� Ŭ��������)

class Student : public Person
{
private:
	int studentID;

public:
	Student(const char*, int, int);
	void ShowData(); // �ϴ��� ��Ӱ��� ����Լ��̸� �ٸ���
};

Person::Person(const char* myname, int myage) : age(myage)
{
	strcpy(name, myname);
}

void Person::getData()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}

Student::Student(const char* myname, int myage, int mystudentID) 
	: Person(myname, myage)
{
	studentID = mystudentID;
}

void Student::ShowData()
{
	Person::getData();
	cout << "�й� : " << studentID << endl;
}

int main(void)
{
	Student s1("ȫ�浿", 15, 123);
	s1.ShowData();

	return 0;
}