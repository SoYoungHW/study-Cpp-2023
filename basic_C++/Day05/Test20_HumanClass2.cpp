// ���� �� ��ü�迭
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
		name = new char[strlen(xname) + 1]; // ���ڸ� ��� ��
		strcpy(name, xname);
	}
	void getData()
	{
		cout << "��Ϲ�ȣ : " << id << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl << endl;
	}
	~Human()
	{
		delete[]name; // �迭Ÿ��
		cout << "�Ҵ�� ������ �����Ǿ����ϴ�." << endl;
	}
};

int main(void)
{
	Human h(1, "ȫ�浿", 15);
	h.getData();

	Human hary[3] = { Human(2, "�迵��", 23), Human(3, "��ö��", 7), Human(4,"�ƹ���", 50) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}