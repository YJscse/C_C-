#include <stdio.h>

int main15_02(void)
{
	int num[10] = { 0 };
	int i;
	int nom = 0;

	printf("������ 10�� �Է��Ͻÿ�: ");
	
	for (i = 0; i < 10; i++)     // �迭�� ������� �Է��� �޴´�
	{
		scanf("%d", &num[i]);	
	}

	for (i = 0; i < 10; i++)  // Ȧ���� �տ������� ���
	{
		nom = num[i] % 2;
		if (nom == 1)
		{
			printf("%d ", num[i]);
		}
		
	}

	for (i = 9; i > -1; i--)  // ¦���� �ڿ������� ���
	{
		nom = num[i] % 2;
		if (nom == 0)
		{
			printf("%d ", num[i]);
		}

	}
	
	return 0;

}