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
		strcpy(this->name, name); // 문자열 대입연산자 불가
	}
	void ShowYourName() const // 함수 상수화(데이터변경을방지, 필수는아님)
	{
		cout << " name : " << name << endl;
	}
};

class PermanentWorker : public Employee // 기존의 접근제한 지시선언 그대로 상속
{
private:
	int salary; // 월 급여

public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money) {}
	int GetPay() const // 오버라이딩
	{
		return salary;
	}
	void ShowSalaryInfo() const // 오버라이딩
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
		: Employee(name), worktime(0), payPerHour(pay) {} // worktime 0으로 초기화
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
	int salesResult; // 월 판매실적
	double bonusRatio; // 상여금 비율

public:
	SaleWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesresult(int value)
	{
		salesResult += value;
	}
	int GetPay() const // 오버라이딩
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio); // 임시객체
	}
	void ShowSalaryInfo() const  // 오버라이딩
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee * emplist[50]; // 포인터'배열'
	int empNum;

public:
	EmployeeHandler() : empNum(0) {}
	void AddEmpolyee(Employee* emp)
	{
		emplist[empNum++] = emp; // ++a 증가시키고실행, a++ 실행시키고증가
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
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmpolyee(new PermanentWorker("KIM", 1000));
	handler.AddEmpolyee(new PermanentWorker("Lee", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmpolyee(alba);

	// 영업직 등록
	SaleWorker* seller = new SaleWorker("Hong", 1000, 0.1);
	seller->AddSalesresult(7000);
	handler.AddEmpolyee(seller);

	// 이번달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}