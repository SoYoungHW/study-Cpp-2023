#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* 생성자 사용 - 이니셜라이저 */
class MyClass
{
private:
	char id;
	char name[10];
	int age;

public:
	MyClass(char xid, const char* xname, int xage) ; // 생성자 선언(원형)
	void getData();
};

MyClass::MyClass(char xid, char* xname, int xage) : id(xid), age(xage)
{
	cout << "생성자 호출" << endl;
	strcpy_s(name, xname);
};  // 멤버 이니셜라이저

void MyClass::getData()
{
	cout << "ID : " << id << endl;
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}

int main(void)
{
	MyClass Me('A', "홍길동", 15);
	Me.getData();

	return 0;
}