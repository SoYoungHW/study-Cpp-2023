#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
private:
	int value;
	
public:
	MyClass(int val) : value(val) {}
	MyClass operator+(const MyClass& other) const // ����� - ��ü(�Է¿� ��������) 
	{
		return MyClass(value + other.value); // �����ڴ� ���ϰ� �־�� ��
	} // ���� ���濩���� ���ֱ����� const(const �Լ�)
	void print() { cout << value << endl; }
};

int main(void)
{
	MyClass a(10);
	a.print();

	MyClass b(a); // b=a
	b.print();

	MyClass c = b;
	c.print();

	MyClass d = a + b + c;
	// ������ �����ڸ� void �Լ��� ���Ƿ� �ϸ� a + b �� void ���·� ��ȯ�Ǿ ��ü�� c�� ����Ұ�
	d.print();
	// +�����ڴ� ��ü���ϱ� ���� ����(���X)
	// -> +�����ڸ� �����ε�(��ü���� ���Ҽ��ִ� ����� ������ ����������-��������)
	// public ������ ����


	return 0;
}