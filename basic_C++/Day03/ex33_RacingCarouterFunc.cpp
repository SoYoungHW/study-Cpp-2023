#include <iostream>
using std::cin;
using std::cout;
using std::endl;

namespace CAR_CONST
{
	enum
	{
		IN_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gameID[CAR_CONST::IN_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState(); // �������� ���
	void Accel(); // ����, �ӵ�����
	void Break(); // �극��ũ, �ӵ�����
};

void Car::ShowCarState()
{
	cout << "������ID :" << gameID << endl;
	cout << "���ᷮ :" << fuelGauge << "%" << endl;
	cout << "����ӵ� :" << curSpeed << "km/s" << endl << endl;

}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD))
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
	void Car::Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}
