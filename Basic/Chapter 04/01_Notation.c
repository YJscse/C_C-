#include <stdio.h>

int main1
(void)
{
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032,  num4 = 024;

	printf("0xA7의 10진수 정수 값: %d \n", num1);
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf("032의  10진수 정수 값: %d \n", num3);
	printf("024의  10진수 정수 값: %d \n", num4);

	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d + %d = %d \n", num3, num4, num3 + num4);

	return 0;
}

//특별한 선언이 없으면 10진수
//0x로 시작하면 16진수
//0으로 시작하면 8진수