#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* 생성자 사용 - 이니셜라이저 */
class MyClass
{
private:
	char* id;
	char name[10];
	int age;

public:
	MyClass(const char* xid, const char* xname, int xage);  // 생성자 선언(원형)
	void getData();
	~MyClass();
};

MyClass::MyClass(const char* xid, const char* xname, int xage) : age(xage)
{										// 멤버 이니셜라이저(보통은 선언에)
	cout << "생성자 호출" << endl;
	int len = strlen(xid) + 1;
	id = new char[len]; // 메모리 동적할당
	strcpy(id, xid);
	strcpy(name, xname);
}; 

void MyClass::getData()
{
	cout << "ID : " << id << endl;
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}

MyClass::~MyClass() // 소멸자
{
	delete[]id;
	cout << "소멸자 호출" << endl;
}

int main(void)
{
	MyClass Me("A", "홍길동", 15);
	Me.getData();

	return 0;
}