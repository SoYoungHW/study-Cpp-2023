#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char* argv[])
{
	int i = 0;
	cout << "���� ���ڰ��� : " << argc << endl;
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	return 0;
}