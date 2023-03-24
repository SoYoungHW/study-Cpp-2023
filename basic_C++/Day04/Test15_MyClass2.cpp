#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* 생성자 사용 */
class MyClass
{ 
private:
	char id; 
	char name[10];
	int age;

public:
	MyClass(char xid, const char* xname, int xage); // 생성자 선언(원형)
	void getData();
};

MyClass::MyClass(char xid, const char* xname, int xage)
{
	cout<<"생성자 호출"<<endl;
	id = xid;
	strcpy_s(name, xname);
	age = xage;
}  // 생성자 정의를 클래스 밖으로

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