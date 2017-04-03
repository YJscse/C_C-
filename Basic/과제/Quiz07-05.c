#include <stdio.h>

int main07_05(void)
{
	int dan, num;

	printf("가로 \n");

	for (num = 1; num < 10; num++)
	{
		for (dan = 2; dan < 10; dan++)
		{
			printf("%dx%d=%d \t", dan, num, dan * num);
		}
		printf("\n");
	}

	printf("세로 \n");

	for (dan = 2; dan < 10; dan++)
	{
		for (num = 1; num < 10; num++)
		{
			printf("%dx%d=%d \t", dan, num, dan * num);
		}
		printf("\n\n");
	}
	return 0;
}
