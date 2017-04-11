#include <stdio.h>


int mainsdfasfd(void)
{
	int arr[50][50];
	int num = 0;
	int count = 0;
	int i = 0, j = 0;

	printf("정수 입력: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			arr[i][j] = 0;
		}
	}
	i = 0;
	j = 0;

	while (count < num * num)
	{
		for (; arr[i][j] == 0 && count < num * num; j++)
		{
			arr[i][j] = ++count;
		}
		printf("i: %d j: %d num: %d count: %d a\n", i, j, num * num, count);
		j--;
		i++;
		for (; arr[i][j] == 0 && count < num * num; i++)
		{
			arr[i][j] = ++count;
		}
		printf("i: %d j: %d num: %d count: %d aa\n", i, j, num * num, count);
	
		i--;
		j--;
		for (; arr[i][j] == 0 && count < num * num; j--)
		{
			arr[i][j] = ++count;
		}
		printf("i: %d j: %d num: %d count: %d aaa\n", i, j, num * num, count);
		j++;
		i--;
		for (; arr[i][j] == 0 && count < num * num; i--)
		{
			arr[i][j] = ++count;
		}

		i++;
		j++;
	}

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}