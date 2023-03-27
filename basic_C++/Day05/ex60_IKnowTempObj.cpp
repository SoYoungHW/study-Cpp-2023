#include <iostream>
using std::cout;
using std::endl;

class Temprary
{
private:
	int num;

public:
	Temprary(int n) : num(n)
	{
		cout << "create obj" << num << endl;
	}
	~Temprary()
	{
		cout << "destroy obj" << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temprary(100); // �ӽð�ü(�����̸�����)���� // �ӽð�ü�Ҹ�(�Ҹ���ȣ��)
	cout << "********** after make!" << endl << endl;

	Temprary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl ;
	
	const Temprary& ref = Temprary(300); // �ӽð�ü �������·� ����(����)
	cout << "********** end of make!" << endl << endl;

	return 0; // ref �Ҹ�
}