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
	FruitSaller(int price, int num, int money)
		: APPLE_PRICE(price), numofApples(num), myMoney(money) {}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSaleResult() const
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
	FruitBuyer(int money) : myMoney(money), numofApples(0) {}
	void BuyApples(FruitSaller& seller, int money)
	{
		numofApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "�����ܾ� :" << myMoney << endl;
		cout << "������� :" << numofApples << endl << endl;
	}
};

int main(void)
{
	FruitSaller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "�Ǹ��� ��Ȳ" << endl << "----------" << endl;
	seller.ShowSaleResult();
	cout << "������ ��Ȳ" << endl << "----------" << endl;
	buyer.ShowBuyResult();

	return 0;
}