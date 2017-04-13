#include <stdio.h>

int main08_04(void)
{
	int dan;
	int num;

	for (dan = 2; dan < 10; dan++)
	{
		for (num = 1; num <= dan; num++)
		{
			printf("%d x %d = %d \n", dan, num, dan * num);
		}
		dan++;
		printf("\n");
	}
	return 0;
}