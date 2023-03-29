/* 상속설계 */
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

}; // 추상화(특징으로 클래스설계)

class Student : public Person
{
private:
	int studentID;

public:
	Student(const char*, int, int);
	void ShowData(); // 일단은 상속간의 멤버함수이름 다르게
};

Person::Person(const char* myname, int myage) : age(myage)
{
	strcpy(name, myname);
}

void Person::getData()
{
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}

Student::Student(const char* myname, int myage, int mystudentID) 
	: Person(myname, myage)
{
	studentID = mystudentID;
}

void Student::ShowData()
{
	Person::getData();
	cout << "학번 : " << studentID << endl;
}

int main(void)
{
	Student s1("홍길동", 15, 123);
	s1.ShowData();

	return 0;
}