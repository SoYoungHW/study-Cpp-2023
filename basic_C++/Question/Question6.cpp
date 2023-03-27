/* ex08. BoxVolume 함수 오버로딩 형태로 재구현 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	return length * width * 1;
}

int BoxVolume(int length)
{
	return length * 1 * 1;
}

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;

	return 0;
}