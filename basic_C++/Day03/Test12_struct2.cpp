#include <iostream>

enum week
{
	sun = 0, // 열거형
	mon = 1,
	tue,
	wed // 자동증가
};

int main(void)
{
	printf("%d\n", sun);
	printf("%d\n", tue);
	printf("%d\n", wed);

	return 0;
}