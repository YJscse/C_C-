#include <stdio.h>

int main20_01(void)
{
	int arr[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int i = 0, j = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");  
	// 정상
	
	for (i = 0; i < 4; i++)
	{
		for (j = 3; j > -1; j--)
		{
			
			printf("%-3d", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n\n");
	// 시계방향으로 90도
	for (i = 3; i > -1; i--)
	{
		for (j = 3; j > -1; j--)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	//시계방향으로 180도
	for (j = 3; j > -1; j--)
	{
		for (i = 0; i < 4; i++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	//시계방향으로 270도
}