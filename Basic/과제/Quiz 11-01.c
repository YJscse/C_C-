/*
���̰� 5�� int�� �迭�� �����ؼ� ����ڷκ��� 5���� ������ �Է¹޴´�.
�׸��� �ִ밪, �ּҰ�, ��� ���� ���� ���϶�.�Լ�(�ִ�, �ּ�, ��)�� �����Ͽ� �����Ͻÿ�.
*/

#include <stdio.h>

int AbsolMax(int arr[]);
int AbsolMin(int arr[]);
int AllSum(int arr[]);

int main12562(void)
{
	int arr[5] = { 0 };
	int max = 0;
	int min = 0;
	int sum = 0;

	printf("5���� ������ �Է��Ͻÿ�: ");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("�ִ밪: %d, �ּҰ�: %d ����: %d\n", AbsolMax(arr), AbsolMin(arr), AllSum(arr));

	return 0;
}

int AbsolMax(int arr[])
{
	int max;
	max = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int AbsolMin(int arr[])
{
	int min;
	min = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

int AllSum(int arr[])
{
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}
