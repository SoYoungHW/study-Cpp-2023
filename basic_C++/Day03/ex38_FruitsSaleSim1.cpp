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
		cout << "남은사과 :" << numofApples << endl;
		cout << "판매수익 :" << myMoney << endl << endl;
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
		cout << "현재잔액 :" << myMoney << endl;
		cout << "사과개수 :" << numofApples << endl << endl;
	}
};

int main(void)
{
	FruitSaller seller;
	seller.InitMembers(1000, 20, 0);
	
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << "구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}