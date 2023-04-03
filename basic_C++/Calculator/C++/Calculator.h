#pragma once// author 황소영 
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Calculator // Calculator 클래스 선언
{
private:
	double num1;
	char oper;
	double num2;
	// 멤버변수 선언

public:
	Calculator(); // 생성자
	double Calculate(double x, char cper, double y); // 멤버함수 선언
	void ShowCalculate(); // 멤버함수 선언
	~Calculator(); // 소멸자
};

#endif

