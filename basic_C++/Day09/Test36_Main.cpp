#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char* argv[])
{
	int i = 0;
	cout << "전달 인자개수 : " << argc << endl;
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	return 0;
}