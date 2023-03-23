#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class MyClass
{
private:	// 외부접근 불허(95% - 멤버함수를 통해 값집어넣음
	int private_val;
public:		// 외부접근 허용
	int public_val;
protected:	// 상속에서만 접근가능
	int protected_val;

public:	// 멤버함수는 무조건 public
	void get()
	{
		cout << "public_val : " << public_val << endl;
		cout << "private_val : " << private_val << endl;

	}

	void set(int a)
	{
		private_val = a;
	}
}; // 접근제한 지시자 안쓰면 자동 private

int main(void)
{
	MyClass o;
	// o.private_val;
	o.public_val = 100;
	// o.protected_val;

	o.set(200);
	o.get();
	
	return 0;
}