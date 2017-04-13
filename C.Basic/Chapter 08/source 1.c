#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main00000()
{
	int num1, num2, num3;

	srand((int)time(NULL));

	num1 = rand() % 10;

	do
	{
		num2 = rand() % 10;
	} while (num2 == num1);

	do
	{
		do
		{
			num3 = rand() % 10;
		} while (num3 == num2);

	} while (num3 == num1);

	printf("생성된 숫자: %d%d%d \n", num1, num2, num3);

	return 0;
}