#include <iostream>
int main(void)
{
	int val1; // �ʱ�ȭ�� �Ƚ�Ű�� ���ſ��� �����Ⱚ�� ������־�����, ����� 0�� ����Ǿ�����
	std::cout << "ù ��° �����Է� : ";
	std::cin >> val1;

	int val2;
	std::cout << "�� ��° �����Է� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������� : " << result << std::endl; // �ٸ� �ڷ����¶� �� ���ο� ��°���(C������ X)
	return 0;
}