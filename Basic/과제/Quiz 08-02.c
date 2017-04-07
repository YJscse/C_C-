/*
두개의 정수를 입력 받아서 두수의 차를 출력하는 프로그램을 작성하라.

단 입력된 두 수의 순서에 상관없이 출력결과는 항상 0 이상이어야 한다.

1과2를 입력했다면 1 .... 20과10을 입력했다면 10 ....int

위 프로그램을 if문 또는 조건연산자를 이용하여 작성해보자.

*/

#include <stdio.h>

int main08_02(void)
{
	int num1, num2;

	printf("두 개의 정수를 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		num1 = num2;
		printf("%d - %d = %d \n", num1, num2, num1 - num2);
	}
	else
	{
		num2 = num1;
		printf("%d - %d = %d \n",num2, num1, num1 - num2);
	}
}