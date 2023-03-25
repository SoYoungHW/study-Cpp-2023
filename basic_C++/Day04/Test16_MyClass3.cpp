#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* ������ ��� - �̴ϼȶ����� */
class MyClass
{
private:
	char* id;
	char name[10];
	int age;

public:
	MyClass(const char* xid, const char* xname, int xage);  // ������ ����(����)
	void getData();
	~MyClass();
};

MyClass::MyClass(const char* xid, const char* xname, int xage) : age(xage)
{										// ��� �̴ϼȶ�����(������ ����)
	cout << "������ ȣ��" << endl;
	int len = strlen(xid) + 1;
	id = new char[len]; // �޸� �����Ҵ�
	strcpy(id, xid);
	strcpy(name, xname);
}; 

void MyClass::getData()
{
	cout << "ID : " << id << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}

MyClass::~MyClass() // �Ҹ���
{
	delete[]id;
	cout << "�Ҹ��� ȣ��" << endl;
}

int main(void)
{
	MyClass Me("A", "ȫ�浿", 15);
	Me.getData();

	return 0;
}