#include <iostream>
using std::cout;
using std::endl;

class First
{
private:
	char* strOne;

public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

int main(void)
{
	First* ptr = new Second("Simple", "complex");
	delete ptr; // ����Ҹ��� ��� �Ѵ� ������ 

	return 0;
}

