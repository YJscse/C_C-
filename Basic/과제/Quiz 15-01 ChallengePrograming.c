#include <stdio.h>

int main1s5ds6e(void)
{
	int num[10] = { 0 };
	int odn[10] = { 0 };
	int evn[10] = { 0 };
	int i = 0, nom = 0, count = 0;

	printf("10���� ������ �Է�: ");
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		nom = num[i] % 2;
		if (nom == 1)
		{
			odn[count] = num[i];
			count++;
		}
	}
	printf("Ȧ�� ���: ");

	for (i = 0; i < count; i++)
	{
		printf("%d, ", odn[i]);
	}
	printf("\b\b \n");

	count = 0;
	for (i = 0; i < 10; i++)
	{
		nom = num[i] % 2;
		if (nom == 0)
		{
			evn[count] = num[i];
			count++;
		}

	}
	printf("¦�� ���: ");
	
	for (i = 0; i < count; i++)
	{
		printf("%d, ", evn[i]);
	}
	printf("\b\b \n");

	return 0;
}