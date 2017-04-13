#include <stdio.h>

int main10(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 == 12);
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	return 0;
}

/* 
   A && B   ←  A와 B가 모두 참이면 참을 반환 (논리 AND)
   A || B   ←  A나 B가 참이면 참을 반환 (논리 OR)
   !A  ←  A가 참이면 거짓, A가 거짓이면 참을 반환 (논리 NOT)

*/