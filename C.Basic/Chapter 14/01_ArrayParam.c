#include <stdio.h>

void ShowArayElem14_01(int * param, int len)     //() ��ȣ�ȿ� ���������� ����
{
	int i; //���������� �������� ����
	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);           // ���� �迭�� ���������ʾ�����
	}									   // �ּҸ��� �����Ͽ� �Լ��� ������ ���� ����
	printf("\n");
}

int main14_01(void)
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };

	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}