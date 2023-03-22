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
	std::cout << "BestCom이 정의한 함수" << std::endl;
	FrettyFunc();
	ProgCom::SimpleFunc();
}

void BestCom::FrettyFunc(void)
{
	std::cout << "Fretty함수" << std::endl;
}

void ProgCom::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}