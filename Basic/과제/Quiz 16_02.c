#include <stdio.h>

int main16_02(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-2d", arr1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%-2d", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}