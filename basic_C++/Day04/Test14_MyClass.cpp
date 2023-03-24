#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class MyClass // 클래스이름 앞글자 대문자

/* 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다(은닉) */
{
// 멤버변수(속성) 
private: // -멤버함수를 통해서만 접근가능
	char id; // 속성값에 초기화X
	char name[10];
	int age;

// 멤버함수(기능) = 메소드
public:
	void set(char xid, const char* xname, int xage);
	void get();
};

void MyClass::set(char xid, const char *xname, int xage) // 매개변수
{
	id = xid;
	strcpy_s(name, xname);
	age = xage;

} // 초기화

void MyClass::get()
{
	cout << "ID : " << id << endl;
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl << endl;
}

int main(void)
{
	MyClass Me;
	Me.set('A', "홍길동", 15);
	Me.get();

	return 0;
}