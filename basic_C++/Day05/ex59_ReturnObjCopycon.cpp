#include <iostream>
using std::cout;
using std::endl;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "복사생성자 생성" << endl; // this = ob, copy = obj
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num : " << num << endl;
	}
};

SoSimple SimpleFunc(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFunc(obj).AddNum(30).ShowData();
	obj.ShowData();

	return 0;
}
