#include <iostream>

namespace BestCom
{
	void SimpleFunc(void);
	void FrettyFunc(void);
}

//namespace BestCom
//{
//	void FrettyFunc(void);
//}

namespace ProgCom
{
	void SimpleFunc(void);
}

int main(void)
{
	BestCom::SimpleFunc();
	return 0;
}

void BestCom::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	FrettyFunc();
	ProgCom::SimpleFunc();
}

void BestCom::FrettyFunc(void)
{
	std::cout << "Fretty�Լ�" << std::endl;
}

void ProgCom::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}