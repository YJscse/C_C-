#include <stdio.h>

int main(void)
{
	int dan, num;

	printf("���� \n");

	for (dan = 1; dan < 10; dan++)
	{
		for (num = 2; num < 10; num++)
		{
			printf("%dx%d=%d \t", num, dan, dan * num);
		}

		printf("\n");
	}

	printf("\n���� \n");

	for (num = 2; num < 10; num++)
	{
		for (dan = 1; dan < 10; dan++)
		{
			printf("%dx%d=%d \t", num, dan, dan * num);
		}
	}

	return 0;
}