#include <stdio.h>

int main08_03(void)
{
	int sub1 = 0, sub2 = 0, sub3 = 0;
	int num = 0;
	int result = 0;

	printf("국어 영어 수학 점수를 차례대로 입력하시오: ");
	scanf("%d%d%d", &sub1, &sub2, &sub3);

	result = (sub1 + sub2 + sub3) / 3;

	if (result >= 90)
	{
		printf("평균: %d 학점 A", result);
	}
	else if (result >= 80)
	{
		printf("평균: %d 학점 B", result);
	}
	else if (result >= 70)
	{
		printf("평균: %d 학점 C", result);
	}
	else if (result >= 50)
	{
		printf("평균: %d 학점 D", result);
	}
	else
	{
		printf("평균: %d 학점 F", result);
	}
}