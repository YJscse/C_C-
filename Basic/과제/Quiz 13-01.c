/*
CH13.�����Ϳ� �迭


����1

���̰� 6�� int�� �迭�� �����Ͽ� 1,2,3,4,5,6 ���� �ʱ�ȭ �Ѵ�.

���ο� �迭�� �����Ͽ� ����� ���� ������ ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.


�ۼ� ����� �������� ����, ���� ���·�~



*/
#include <stdio.h>

int main1212(void)
{
	int num1[6] = { 1, 2, 3, 4, 5, 6 };
	int num2[6] = { 0 };
	int *ptr = num1;

	for (int i = 0; i < 6; i++)
	{
		num2[i] = num1[5 - i];
	}
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d ",num2[i]);
	}

	return 0;
}





















/*
int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = {0};
	int *ptr1 = arr1;

	for (int i = 0; i < 6; i++)
	{
		arr2[i] = *ptr1;
		printf("%d ", *ptr1);
		ptr1++;
	}
	printf("\n");

	for (int i = 5; i > -1; i--)
	{
		printf("%d ", arr2[i]);
	}

	printf("\n");


	return 0;
}
*/