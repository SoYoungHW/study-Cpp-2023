#include <iostream>
using std::cout;
using std::endl;

class Person
{
public:
	void Sleep() {cout << "Sleep" << endl;}
};

class Student : public Person
{
public:
	void Study() {cout << "Study" << endl;}
};

class PartimeStudent : public Student
{
public:
	void Work() {cout << "Work" << endl;}
};

/* ����Ű�� �Ͱ� ������ ������ �ٸ���
1. �θ�� �ڽ��� ����ų �� �ִ�(�ݴ�Ұ�)
2. �����Ҷ��� �������� Ÿ�Կ� ����
(Student���� Person, Student �Ӽ��� ��� �־� �Ѵ� ���� ����
PartimeStudent �Ӽ��� ������ �����ʾ� ���� �Ұ�) */

int main(void)
{
	Person* ptr1 = new Student(); // PersonŸ�� ������ Student Ÿ���� ����Ŵ
	Person* ptr2 = new PartimeStudent();
	Student* ptr3 = new PartimeStudent(); // Student Ÿ�� ��ü������ PartimeStudent Ÿ���� ����Ŵ
	// PartimeStudent* ptr3 = new Student(); �ڽ��� �θ� ����ų �� ����

	ptr1->Sleep(); // ������ Ÿ��
	// ptr1->Study() ���ٺҰ�
	ptr2->Sleep(); // ������ Ÿ��
	// ptr2->Work(); ���ٺҰ�
	ptr3->Study(); // super -> sub
	ptr3->Sleep();

	PartimeStudent* ptr4 = new PartimeStudent();
	ptr4->Sleep();
	ptr4->Study();
	ptr4->Work();

	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}