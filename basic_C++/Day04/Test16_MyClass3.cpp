#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* ������ ��� - �̴ϼȶ����� */
class MyClass
{
private:
	char id;
	char name[10];
	int age;

public:
	MyClass(char xid, const char* xname, int xage) ; // ������ ����(����)
	void getData();
};

MyClass::MyClass(char xid, char* xname, int xage) : id(xid), age(xage)
{
	cout << "������ ȣ��" << endl;
	strcpy_s(name, xname);
};  // ��� �̴ϼȶ�����

void MyClass::getData()
{
	cout << "ID : " << id << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}

int main(void)
{
	MyClass Me('A', "ȫ�浿", 15);
	Me.getData();

	return 0;
}