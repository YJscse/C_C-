#include <stdio.h>

int main1651dfd(void)
{
	int arr[4][4] = { 0 };
	int name[5] = { "�̼���", "������", "��������", "����", "����" };
	int sub[5] = { "����", "����", "����", "����", "����" };
	int ssum[4] = { 0 };
	int psum[4] = { 0 };
	int i, j, sum = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%s�� %s ������ �Է��Ͻÿ�. ", name[i], sub[j]);
			scanf("%d", &arr[j][i]);
		}
	}

	printf("\n");
	printf("%-2s ", "����");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			ssum[i] = ssum[i] + arr[i][j];
		}
	}
	//��������
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			psum[j] = psum[j] = arr[j][i];
		}
	}
	//�л�����
	for (i = 0; i < 4; i++)
	{
		sum = sum + psum[j] + ssum[i];
	}
	//�������
	for (i = 0; i < 5; i++)
	{
		printf("%-6s", name[i]);
	}
	//�̸� ���
	for (i = 0; i < 4; i++)
	{
		printf("%-2s ", sub[i]);
		for (j = 0; j < 4; j++)
		{
			printf("%6d ", arr[i][j]);
		}
		printf("%4d", ssum[i]);
		printf("\n");
	}
	printf("%-2s ", "����");
	for (i = 0; i < 4; i++)
	{
		printf("%6d ", psum[i]);
	}
	printf("%4d ", sum);
	printf("\n\n");

	return 0;
}

