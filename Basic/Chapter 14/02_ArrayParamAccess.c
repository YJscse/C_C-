#include <stdio.h>

void ShowArayElem(int * param, int len)     //() 괄호안에 지역변수를 선언
{
	int i; //마찬가지로 지역변수 선언
	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);
	}
	printf("\n");
}

void AddArayElem(int * param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
	{
		param[i] = param[i] + add;
	}
}

int main14_02(void)
{
	int arr[3] = { 1, 2, 3 };

	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);  
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}