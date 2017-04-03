#include <stdio.h>

int main07_02(void)
{
	int num, is;
	double i = 0.0, total = 0.0;

	printf("몇개의 정수를 입력?(minus to quit): ");
	scanf("%d", &num);

	for (is = 0; is < num; is++)
	{
		printf("정수 입력: ");
		scanf("%lf", &i);                // %lf 입력
		total = total + i;               // %f 출력
	}

	printf("평균: %f \n", total / num);

	return 0;
}