#include <iostream>
using std::cout;

template <typename T>
class CTest // Ŭ���� ���ø� �Ϲ�ȭ
{
private:
	T data;

public:
	CTest(T adata) : data(adata) {}
	T getData()
	{
		return data;
	}
};

template <>
class CTest<char> // Ŭ���� ���ø� Ư��ȭ
{
private:
	char data;

public:
	CTest(char adata) : data(adata) {}
	char getData()
	{
		return data;
	}
}; // Ư�� �ڷ����� ���ؼ� �����ϴ� ���°� �ټ� �޶��� �� ���!

int main()
{
	CTest<int> obj1(10);
	std::cout << obj1.getData() << std::endl;

	CTest<char> obj2('A');
	std::cout << obj2.getData() << std::endl;

	return 0;
}