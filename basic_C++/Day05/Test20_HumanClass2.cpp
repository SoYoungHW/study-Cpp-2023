// 복습 및 객체배열
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Human
{
private:
	int id;
	char* name;
	int age;

public:
	Human(int xid, const char* xname, int xage) : id(xid), age(xage)
	{
		name = new char[strlen(xname) + 1]; // 숫자를 적어도 됨
		strcpy(name, xname);
	}
	void getData()
	{
		cout << "등록번호 : " << id << endl;
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl << endl;
	}
	~Human()
	{
		delete[]name; // 배열타입
		cout << "할당된 영역이 삭제되었습니다." << endl;
	}
};

int main(void)
{
	Human h(1, "홍길동", 15);
	h.getData();

	Human hary[3] = { Human(2, "김영희", 23), Human(3, "김철수", 7), Human(4,"아무나", 50) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}