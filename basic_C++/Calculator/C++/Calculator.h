#pragma once// author Ȳ�ҿ� 
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Calculator // Calculator Ŭ���� ����
{
private:
	double num1;
	char oper;
	double num2;
	// ������� ����

public:
	Calculator(); // ������
	double Calculate(double x, char cper, double y); // ����Լ� ����
	void ShowCalculate(); // ����Լ� ����
	~Calculator(); // �Ҹ���
};

#endif

