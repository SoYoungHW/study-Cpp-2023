#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Human
{
private:
	int id;
	char name[20]; // = "홍길동" 배열 선언과 동시에 초기화 가능
	int age;
	
public:
	Human(int xid, const char xname[20], int xage) : id(xid), age(xage)
	{
		strcpy(name, xname);
	}
	/* void setData(int xid, const char xname[20], int xage)
	{
		id = xid;
		strcpy(name, xname);
		age = xage;
	} */
	void getData()
	{
		cout << "등록번호 : " << id << endl;
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
};

int main(void)
{
	Human h(123456, "홍길동", 30);
	h.getData();

	return 0;
}