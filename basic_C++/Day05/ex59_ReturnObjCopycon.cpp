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
		cout << "��������� ����" << endl; // this = ob, copy = obj
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
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFunc(obj).AddNum(30).ShowData();
	obj.ShowData();

	return 0;
}