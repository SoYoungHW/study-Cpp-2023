// 황소영
#include "Calculator_v1.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Calculator_v1::Calculator_v1()
{
    string str = " ";
}

double Calculator_v1::Calculate_v1(string str)
{   
    this->str = str;
    double result = 0;
    stringstream x(str);
    x >> result;

    char c;
    double y;
    
    while (x >> c >> y)

        try
    {
        if (y == 0) throw y;
        else
        {
            if (c == '+') { result += y; }
            else if (c == '-') { result -= y; }
            else if (c == '*') { result *= y; }
            else if (c == '/') { result /= y; }
        }
    }
    catch(double ex)
    {
        cout << "-----ERROR-----" << endl;;
        cout << ex << "으로 나눌 수 없습니다." << endl << endl;
    }

    return result;
}

Calculator_v1::~Calculator_v1() {}