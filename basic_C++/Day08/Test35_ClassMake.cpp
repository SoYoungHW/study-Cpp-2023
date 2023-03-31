/* 동적할당 추가 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Person
{
private:
	char* name;
	int birthday;

public:
	Person(const char* myname, int mybirthday) : birthday(mybirthday)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	Person(const Person& copy) : birthday(copy.birthday)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	Person& operator=(const Person& copy)
	{	
		delete[]name;
		// 이전에 생성한 힙영역(강감찬의 이름주소를 담고있는)을 해제시켜줘야함
		cout << "복사대입연산자 호출" << endl;
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		birthday = copy.birthday;

		return *this;
	} // 콜론초기화X(생성자아니라 함수)
	void ShowPerson()
	{
		cout << "이름 : " << name << endl;
		cout << "생년월일 : " << birthday << endl << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "소멸자호출" << endl;
	}
};

int main(void)
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("강감찬", 20001201);
	p4 = p1; // 얕은 복사로 복사됨 -> delete에서 에러!
	p4.ShowPerson();

	return 0;
}
