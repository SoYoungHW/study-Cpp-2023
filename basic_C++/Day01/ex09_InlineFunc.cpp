#include <iostream>
/* �ζ��� �Լ�
�ڷ����� ������
�����Ϸ��� �ζ���ȭ�� �Ǵ�(���ɿ� �ذ� �ȴٰ� ������ ��� �����ϱ⵵ �� */
inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	// --> std::cout << 5 * 5 << std::endl; // �ڵ尡 ��� �޸� ���� ���
	std::cout << SQUARE(12) << std::endl;

	return 0;
}
