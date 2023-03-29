#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;

class Employee
{
private:
	char name[100];

public:
	Employee(const char* name)
	{
		strcpy(this->name, name); // ���ڿ� ���Կ����� �Ұ�
	}
	void ShowYourName() const // �Լ� ���ȭ(�����ͺ���������, �ʼ��¾ƴ�)
	{
		cout << " name : " << name << endl;
	}
};

class PermanentWorker : public Employee // ������ �������� ���ü��� �״�� ���
{
private:
	int salary; // �� �޿�

public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money) {}
	int GetPay() const // �������̵�
	{
		return salary;
	}
	void ShowSalaryInfo() const // �������̵�
	{
		ShowYourName();
		cout << "salary : " << salary << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int worktime;
	int payPerHour;

public:
	TemporaryWorker(const char* name, int pay)
		: Employee(name), worktime(0), payPerHour(pay) {} // worktime 0���� �ʱ�ȭ
	void AddWorkTime(int time)
	{
		worktime += time;
	}
	int GetPay() const
	{
		return worktime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class SaleWorker : public PermanentWorker
{
private:
	int salesResult; // �� �ǸŽ���
	double bonusRatio; // �󿩱� ����

public:
	SaleWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesresult(int value)
	{
		salesResult += value;
	}
	int GetPay() const // �������̵�
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio); // �ӽð�ü
	}
	void ShowSalaryInfo() const  // �������̵�
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee * emplist[50]; // ������'�迭'
	int empNum;

public:
	EmployeeHandler() : empNum(0) {}
	void AddEmpolyee(Employee* emp)
	{
		emplist[empNum++] = emp; // ++a ������Ű�����, a++ �����Ű������
	}
	void ShowAllSalaryInfo() const
	{
	
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		cout << "salery sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete emplist[i];
	}
};

int main(void)
{
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmpolyee(new PermanentWorker("KIM", 1000));
	handler.AddEmpolyee(new PermanentWorker("Lee", 1500));

	// �ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmpolyee(alba);

	// ������ ���
	SaleWorker* seller = new SaleWorker("Hong", 1000, 0.1);
	seller->AddSalesresult(7000);
	handler.AddEmpolyee(seller);

	// �̹��޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹��޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}