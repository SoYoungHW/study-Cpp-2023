#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* ������ ��� */
class MyClass
{ 
private:
	char id; 
	char name[10];
	int age;

public:
	MyClass(char xid, const char* xname, int xage); // ������ ����(����)
	void getData();
};

MyClass::MyClass(char xid, const char* xname, int xage)
{
	cout<<"������ ȣ��"<<endl;
	id = xid;
	strcpy_s(name, xname);
	age = xage;
}  // ������ ���Ǹ� Ŭ���� ������

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