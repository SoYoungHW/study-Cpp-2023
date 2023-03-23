#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class FruitSaller
{
private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSaleResult()
	{
		cout << "������� :" << numofApples << endl;
		cout << "�Ǹż��� :" << myMoney << endl << endl;
	}
};

class FruitBuyer
{
private:
	int myMoney;
	int numofApples;

public:

	void InitMembers(int money)
	{
		myMoney = money;
		numofApples = 0;
	}
	void BuyApples(FruitSaller& seller, int money)
	{
		numofApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "�����ܾ� :" << myMoney << endl;
		cout << "������� :" << numofApples << endl << endl;
	}
};

int main(void)
{
	FruitSaller seller;
	seller.InitMembers(1000, 20, 0);
	
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "�Ǹ����� ��Ȳ" << endl;
	seller.ShowSaleResult();
	cout << "�������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}