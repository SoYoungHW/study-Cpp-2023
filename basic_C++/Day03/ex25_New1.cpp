/* �޸� �����Ҵ�(CŸ��-c++���� ���������)
�迭, ���ڿ� ���� �ַ� �������� �Ҵ� */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{	
	int* arr;
	int size; // �������ִ� ũ�⺸�� ���� �Է��ϸ� ����, scanf_s ������ġ
	printf("�迭 ���� ���� : ");
	scanf_s("%d", &size); // scanf�� �Է¹��� ���� �ּҿ����� �����

	arr = (int*)malloc(sizeof(int)); // �������� �޸� �Ҵ�(���ڷνᵵ����)

	printf("������� �迭 ũ�� : %d\n", sizeof(int) * size);
	printf("%d\n", sizeof(int));

	free(arr); // �Ҵ�� �޸� �����ؾ���(�޸𸮳��� ��������)
	return 0;	// �Ҵ�� �޸��� �����ּ� ����
}