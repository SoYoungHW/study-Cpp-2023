#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class MyClass // Ŭ�����̸� �ձ��� �빮��

/* Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�(����) */
{
// �������(�Ӽ�) 
private: // -����Լ��� ���ؼ��� ���ٰ���
	char id; // �Ӽ����� �ʱ�ȭX
	char name[10];
	int age;

// ����Լ�(���) = �޼ҵ�
public:
	void set(char xid, const char* xname, int xage);
	void get();
};

void MyClass::set(char xid, const char *xname, int xage) // �Ű�����
{
	id = xid;
	strcpy_s(name, xname);
	age = xage;

} // �ʱ�ȭ

void MyClass::get()
{
	cout << "ID : " << id << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl << endl;
}

int main(void)
{
	MyClass Me;
	Me.set('A', "ȫ�浿", 15);
	Me.get();

	return 0;
}