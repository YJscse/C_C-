#include <stdio.h>

int main11_05(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0';
	printf("string: %s \n", str); // 9번째 요소에 널 문자 저장

	str[6] = '\0';
	printf("string: %s \n", str); // 7번째 요소에 널 문자 저장

	str[1] = '\0';
	printf("string: %s \n", str); // 2번째 요소에 널 문자 저장

	return 0;
}