#include <iostream>
using std::cout;
using std::endl;

class Super
{
public:
	Super() {cout << "Super()" << endl;}
	~Super() {cout << "~Super()" << endl;}
};

class Sub : public Super
{
public:
	Sub() {cout << "Sub()" << endl;}
	~Sub() {cout << "~Sub()" << endl;}
};

int main(void)
{
	cout << "Start" << endl;
	Sub obj;
	/* Sub Ŭ������ ȣ�� -> SuperŬ������ ���� ������ ȣ��-���� -> SubŬ���� ������ ���� */
	cout << "Stop" << endl;

	return 0; // �Ҹ��� (������ �ݴ�, SubŬ���� ���� ����)
}