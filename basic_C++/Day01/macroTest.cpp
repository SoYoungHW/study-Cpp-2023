#include <iostream> // ��ó���Ⱑ �ؼ�

/* ��ũ�� �Լ� : ��ó���� �ؼ��ϴ� �Լ�
���� : ������ ����, �ڷ��� �ʿ� ����
���� : ���� ������ �� ���� ����, ��ȣ�� ������� �� */
#define SUM(x, y)	x + y
#define SQUARE(x) x * x
#define SQUARE1(x) (x) * (x)

void func()
{

}

int main(void) // �����Ϸ��� �ؼ�
{
	std::cout << SUM(10.1, 20.2) << std::endl;
	// --> std::cout << x + y << std::endl;
	// ��ũ�� �Լ��� ���������ʰ� �ڵ尡 �ٷ� �����(�ڵ�ȿ��� �ٷ� ����!)
	func(); // �ش� �Լ��� ����(�б�) -> �Լ� �����Ű�� ��ġ�� ���ƿ�
	std::cout << SQUARE(10) << std::endl;
	std::cout << SQUARE(10 + 1) << std::endl; // 10 + 1 * 10 + 1 = 21 *�� �������
	std::cout << SQUARE1(10 + 1) << std::endl; // (10+1) * (10+1) = 121

	return 0;
}
