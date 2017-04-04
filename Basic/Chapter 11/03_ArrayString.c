#include <stdio.h>

int main11_03(void)
{
	char str[] = "Good morning!";

	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]); //문자열의 끝에는 NULL 문자라 불리는 \0이 와야한다.
	printf("널 문자 정수형 출력: %d \n", str[13]);

	str[12] = '?';  // 배열 str에 저장된 문자열 데이터는 변경 가능!
	printf("문자열 출력: %s \n", str); // %s ← 문자열 출력하는데 필요한 서식문자
	                                   // %s ← NULL 문자를 만날때까지 계속해서 프린트한다.
	return 0;
}

