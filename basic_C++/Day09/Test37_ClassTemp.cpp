#include <iostream>
using std::cout;

template <typename T>
class CTest // 클래스 템플릿 일반화
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
class CTest<char> // 클래스 템플릿 특수화
{
private:
	char data;

public:
	CTest(char adata) : data(adata) {}
	char getData()
	{
		return data;
	}
}; // 특정 자료형에 대해서 제어하는 형태가 다소 달라질 때 사용!

int main()
{
	CTest<int> obj1(10);
	std::cout << obj1.getData() << std::endl;

	CTest<char> obj2('A');
	std::cout << obj2.getData() << std::endl;

	return 0;
}