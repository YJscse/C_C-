#include <stdio.h>

int main100(void)
{
	int i, j;

	for (i = 1; j <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d * %d = %2d", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}