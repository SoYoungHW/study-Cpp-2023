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

/* 가리키는 것과 포인터 접근은 다르다
1. 부모는 자식을 가리킬 수 있다(반대불가)
2. 접근할때는 포인터의 타입에 따름
(Student에는 Person, Student 속성이 모두 있어 둘다 접근 가능
PartimeStudent 속성은 가지고 있지않아 접근 불가) */

int main(void)
{
	Person* ptr1 = new Student(); // Person타입 포인터 Student 타입을 가리킴
	Person* ptr2 = new PartimeStudent();
	Student* ptr3 = new PartimeStudent(); // Student 타입 객체포인터 PartimeStudent 타입을 가리킴
	// PartimeStudent* ptr3 = new Student(); 자식은 부모를 가리킬 수 없다

	ptr1->Sleep(); // 동일한 타입
	// ptr1->Study() 접근불가
	ptr2->Sleep(); // 동일한 타입
	// ptr2->Work(); 접근불가
	ptr3->Study(); // super -> sub
	ptr3->Sleep();

	PartimeStudent* ptr4 = new PartimeStudent();
	ptr4->Sleep();
	ptr4->Study();
	ptr4->Work();

	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}