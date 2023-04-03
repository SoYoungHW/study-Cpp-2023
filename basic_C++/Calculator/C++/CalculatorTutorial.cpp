// author Ȳ�ҿ� 
#include"Calculator.h"

int main(void)
{
	double val1;
	char ch;
	double val2;

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl;
	cout << "Press 'ctrl + c' to exit the program" << endl << endl;

	while (true) // �ݺ�
	{
		cout << "input >> ";
		cin >> val1; // ù��° ���� �Է�
		cin >> ch;	// ������ �Է�
		cin >> val2; // �ι�° ���� �Է�

		try
		{
			if (val2 == 0) throw val2; // ���ܰ� �߻��Ǹ�(0���� ������)
			else
			{
				Calculator cal; // ��ü����
				cal.Calculate(val1, ch, val2); // ����Լ� ����
				cal.ShowCalculate(); // �������Լ� ����
			}
		}
		catch (double ex) // ����ó��
		{
			cout << "-----ERROR-----" << endl;;
			cout << ex << "���� ���� �� �����ϴ�." << endl << endl;
		}
	}

	return 0;
}