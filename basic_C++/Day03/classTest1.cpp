#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class MyClass
{
private:	// �ܺ����� ����(95% - ����Լ��� ���� ���������
	int private_val;
public:		// �ܺ����� ���
	int public_val;
protected:	// ��ӿ����� ���ٰ���
	int protected_val;

public:	// ����Լ��� ������ public
	void get()
	{
		cout << "public_val : " << public_val << endl;
		cout << "private_val : " << private_val << endl;

	}

	void set(int a)
	{
		private_val = a;
	}
}; // �������� ������ �Ⱦ��� �ڵ� private

int main(void)
{
	MyClass o;
	// o.private_val;
	o.public_val = 100;
	// o.protected_val;

	o.set(200);
	o.get();
	
	return 0;
}