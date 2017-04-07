#include <stdio.h>

int mainbubble(void)
{
	int num[] = { 6, 5, 1, 3, 8, 2, 9, 7 };
	int i = 0;
	int j = 0;
	int temp = 0;

	printf("정렬 전: ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", num[i]);
	}

	printf("\n");

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("정렬 후: ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
}
