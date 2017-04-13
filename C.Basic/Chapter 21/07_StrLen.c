#include <stdio.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);     //문자열 끝에 삽입되는 널 문자를 없애는 함수
	str[len - 1] = 0;
}

int main21_07(void)
{
	char str[100];

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	return 0;
}


// strlen() ← 문자열의 길이를 반환하는 함수