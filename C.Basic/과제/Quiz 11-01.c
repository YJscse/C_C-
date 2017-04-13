/*
길이가 5인 int형 배열을 선언해서 사용자로부터 5개의 정수를 입력받는다.
그리고 최대값, 최소값, 모든 수의 합을 구하라.함수(최대, 최소, 합)를 정의하여 구현하시오.
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

	printf("5개의 정수를 입력하시오: ");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("최대값: %d, 최소값: %d 총합: %d\n", AbsolMax(arr), AbsolMin(arr), AllSum(arr));

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
