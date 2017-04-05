#include <stdio.h>

void ShowArayElem14_01(int * param, int len)     //() 괄호안에 지역변수를 선언
{
	int i; //마찬가지로 지역변수 선언
	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);           // 따로 배열을 선언하지않았지만
	}									   // 주소만을 제공하여 함수에 포인터 변수 가능
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