/* rand, srand, time �� �Լ��� �̿��ؼ� 0�̻� 100�̸��� ������ �� 5�� �����ϴ� ���� �ۼ� 
- ������� �и� */
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

int main(void)
{
	srand(time(NULL)); // srand(1) �⺻����, ����ð��� seed������(�ڵ�����)
	for(int i=0; i<5; i++)
		cout << "���� : " << rand() % 100 << endl;
	// ó�� �������� ���� �������� �״�� ��µ�
	// -> seed���� �ٲ��༭ �������� �Ź� ��������
	// % �� ������ ���� Ȯ��
	
	return 0;
}
