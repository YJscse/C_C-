#include <stdio.h>

int main08_07(void)
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		for (num1; num1 >= num2; num1--)
		{
			sum = sum + num1;
			printf("%d + ", num1);
		}
		printf("\b\b= %d", sum);
	}

	else 
	{
		for (num1; num1 <= num2; num1++)
		{
			sum = sum + num1;
			printf("%d + ", num1);
		}
		printf("\b\b= %d", sum);
	}
	printf("\n");
	
	return 0;
}