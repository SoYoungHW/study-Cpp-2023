#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0; // ���� ����� ���� ���������� �ʱ�ȭ ������� ��
	std::cout << "�� ���� �����Է� :";
	std::cin >> val1 >> val2; // �Է±�ɿ� ���ڿ� ���Ұ�(cout ���� �������)

	if (val1 < val2) // �������(if��, switch��)
{
		for (int i = val1 + 1; i < val2; i++) // �ݺ����(for��, while��)
			result += i;
		/* for(�ʱ��; ���ǽ�; ������;){
		} �ʱ�� -> ���� -> ���� -> ���� (������ �����̸� for�� ��������)*/
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	
	std::cout << "�� �� ������ ���� �� :" << result << std::endl;
	return 0;
}