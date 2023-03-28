/* rand, srand, time 세 함수를 이용해서 0이상 100미만의 난수를 총 5개 생성하는 예제 작성 
- 헤더파일 분리 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

int main(void)
{
	srand(time(NULL)); // srand(1) 기본고정, 현재시간을 seed값으로(자동변경)
	for(int i=0; i<5; i++)
		cout << "난수 : " << rand() % 100 << endl;
	// 처음 실행했을 때의 난수값이 그대로 출력됨
	// -> seed값을 바꿔줘서 난수값을 매번 랜덤으로
	// % 로 난수의 범위 확정
	
	return 0;
}
