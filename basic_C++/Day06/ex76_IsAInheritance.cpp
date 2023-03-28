#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name)
	{
		strcpy(owner, name);
	}
	void Calculate()
	{
		cout << "��û ������ ����մϴ�" << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;

public:
	NotebookComp(const char* name, int initChag)
		: Computer(name), Battery(initChag) {}
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		else 
		{
			cout << "�̵��ϸ鼭 ";
			Calculate();
			UseBattery();
		}
	}
	int GetBatteryInfo() { return Battery; }
};

class TabletNotebook : public NotebookComp
{
private:
	char regstpenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen)
		: NotebookComp(name, initChag)
	{
		strcpy(regstpenModel, pen);
	}
	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		if(strcmp(regstpenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�." << endl;
			return;
		}
		else
		{
			cout << "�ʱ� ������ ó���մϴ�." << endl;
			UseBattery();
		}
	}
};

int main(void)
{
	NotebookComp nc("�̼���", 5);
	TabletNotebook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}