#include <stdio.h>

int main12(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf("%d", &num1);
	printf("정수 two: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	return 0;
}

/*
scanf("%d", &num);
%d   ← 이곳에 10진수 정수형태로 입력 받아서 
&num ← 이곳 변수 num에 저장하라
scanf 는 num 에 &를 붙혀라
*/