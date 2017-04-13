/*
CH13.포인터와 배열


문제1

길이가 6인 int형 배열을 선언하여 1,2,3,4,5,6 으로 초기화 한다.

새로운 배열을 생성하여 저장된 값의 순서를 뒤집어 저장하는 프로그램을 작성하시오.


작성 방식은 포인터의 증가, 감소 형태로~



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