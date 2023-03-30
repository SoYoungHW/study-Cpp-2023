#include <iostream>
namespace mystd
{
	using namespace std;

	class ostream
	{
	public:
		void operator << (const char* str) { printf("%s", str); }
		// ���ڿ� = �����ͽ����ּ�
		void operator << (char str) { printf("%c", str); }
		void operator << (int num) { printf("%d", num); }
		void operator << (double e) { printf("%g", e); }
		void operator << (ostream& (*fp)(ostream&ostm)) { fp(*this); }
		// �������� - �Լ�������
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout); // ��¹���
		return ostm;
	} // ���׸�Ʈ�� ����
	ostream cout;
}

int main(void)
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String"; // 9�� ����(�����ͷ� ã�ư�-���ڿ������ּ�)
	cout << endl;
	cout << 3.14;
	cout << endl;
	cout << 123;
	endl(cout);

	return 0;
}

