#include <stdio.h>

int main16_03(void)
{
	int arr[6][6] = 
	{
		{"����", "�̼���", "������", "��������", "����", "����"},
		{"����"},
		{"����"},
		{"����"},
		{"����"},
		{"����"}
	};
	int i = 0, j = 1;

	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			printf("%s�� %s���� �Է�: ", arr[0][i], arr[j][0]);
			scanf("%d", &arr[j][i]);
		}
	}
	// �����Է�
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			arr[5][i] = arr[5][i] + arr[j][i];
		}
	}
	// �л� ����
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			arr[i][5] = arr[i][5] + arr[i][j];
		}
	}
	// ���� ����
	for (j = 1; j < 5; j++)
		{
			arr[5][5] = arr[5][5] + arr[5][j];
		}
	// ����

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (i == 0)
			{
				printf("%-9s", arr[i][j]);
			}
			else if (j == 0)
			{
				printf("%-5s", arr[i][j]);
			}
			else
			{
				printf("%9d", arr[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
	

}

