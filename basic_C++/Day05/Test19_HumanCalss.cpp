#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Human
{
private:
	int id;
	char name[20]; // = "ȫ�浿" �迭 ����� ���ÿ� �ʱ�ȭ ����
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
		cout << "��Ϲ�ȣ : " << id << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
};

int main(void)
{
	Human h(123456, "ȫ�浿", 30);
	h.getData();

	return 0;
}