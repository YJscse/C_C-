#include <stdio.h>

int main20_02(void)
{
	int arr[50][50];
	int num;
	int count = 0;
	int i, j;

	printf("���� �Է�: ");

	while(1) 
	{
		scanf("%d", &num);

		if (num > 45 || num < 2) 
		{
			printf("45���� ���� 1���� ���� �Է����ּ���\n");
			continue;
		}
		break;
	}

	for (i = 0; i < num; i++)
	{						 //num * num ��ŭ�� ������ 0���� �ٲ�
		for (j = 0; j < num; j++)
		{
			arr[i][j] = 0;
		}
	}

	i = 0;
	j = 0;

	for (; count < num * num;) 
	{
		for (; arr[i][j] == 0 && count < num * num; j++)
		{
			arr[i][j] = ++count;
		}

		j--;
		i++;
		//printf("i: %d j: %d num: %d count: %d \n", i, j, num * num, count);
		for (; arr[i][j] == 0 && count < num * num; i++)
		{
			arr[i][j] = ++count;
		}
		
		i--;
		j--;

		for (; arr[i][j] == 0 && count < num * num; j--) 
		{
			arr[i][j] = ++count;
		}

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
}
