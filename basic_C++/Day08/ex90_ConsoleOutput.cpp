#include <iostream>
namespace mystd
{
	using namespace std;

	class ostream
	{
	public:
		void operator << (const char* str) { printf("%s", str); }
		// 문자열 = 포인터시작주소
		void operator << (char str) { printf("%c", str); }
		void operator << (int num) { printf("%d", num); }
		void operator << (double e) { printf("%g", e); }
		void operator << (ostream& (*fp)(ostream&ostm)) { fp(*this); }
		// 실행형태 - 함수포인터
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout); // 출력버퍼
		return ostm;
	} // 세그먼트에 저장
	ostream cout;
}

int main(void)
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String"; // 9행 실행(포인터로 찾아감-문자열시작주소)
	cout << endl;
	cout << 3.14;
	cout << endl;
	cout << 123;
	endl(cout);

	return 0;
}

