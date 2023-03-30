#include <iostream>
using std::cout;
using std::endl;

class Ctest
{
private:
	int num;
	
public:
	Ctest(int n) : num(n)	
	{ 
		cout << num << " Ctest Constructor" << endl;
	}
	~Ctest() // ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ 
	{
		cout << "Ctest Destructor" << endl; 
	}
};

class CtestSub : public Ctest
{
private:
	int subn;

public:
	CtestSub(int n, int sn) : Ctest(n), subn(sn)
	{
		cout << subn << " CtestSub Constructor" << endl;
	}
	~CtestSub() // ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
	{
		cout << "CtestSub Destructor" << endl;
	}
};

int main(void)
{
	Ctest ct(1);
	cout <<"-------------------" << endl;
	CtestSub cs(2, 3);
	cout << "-------------------" << endl;

	return 0; // ¼Ò¸êÀÚ È£Ãâ
}