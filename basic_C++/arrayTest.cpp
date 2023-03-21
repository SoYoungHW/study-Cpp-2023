#include <iostream>
int main(void)
{
	char ch[6] = "hwang";	// 배열선언(생성할때 값을 초기화하는게 편함
	/* 둘이 다름 */			// 문자열(마지막에 null값도 들어가기에 +1의 크기로 만들어야함)
	ch[0] = 'h';
	ch[1] = 'w';
	ch[2] = 'a';
	ch[3] = 'n';
	ch[4] = 'g'; // 문자하나씩 저장 (마지막에 null값 필요없음)
	for (int i = 0; i < 6; i++) {
		printf("%c", ch[i]);
	}

	printf("\nchar 크기: %d\n", sizeof(char));
	printf("%s\n", ch);
	printf("ch[5] : %c\n", ch[5]);
	printf("cha[5] : %s\n", ch[5]);
	printf("배열이름 ch : %p\n", ch);
	printf("배열주소 ch : %p\n", &ch);


	/* ch[0] = 'a'; 생성후에는 인덱스 연산자를 통해서 하나씩 넣어야 */
	/* 문자열 - ""사용, 맨끝에는 null값 */

	return 0;
}