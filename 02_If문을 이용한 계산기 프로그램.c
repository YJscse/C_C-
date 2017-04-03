#include <stdio.h>

int main2(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셉 4.나눗셈 \n");
	printf("무엇을 선택? ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)                  // opt가 1이면 실행
	{
		result = num1 + num2;
	}
	if (opt == 2)                  // opt가 2면 실행
	{
		result = num1 - num2;
	}
	if (opt == 3)                  // opt가 3이면 실행
	{
		result = num1 * num2;
	}
	if (opt == 4)                  // opt가 4면 실행
	{
		result = num1 / num2;
	}

	printf("결과: %f \n", result);

	return 0;
}
// 이러한 코드는 불합리하다 고로 if ~ else 를 배운다