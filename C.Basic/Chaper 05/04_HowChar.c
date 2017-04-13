#include <stdio.h>

int main4(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);  
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);

	return 0;
}
// 서식문자 %c 해당숫자의 아스키 코드 문자를 출력해라