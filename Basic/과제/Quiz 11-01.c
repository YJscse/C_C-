/*
길이가 5인 int형 배열을 선언해서 사용자로부터 5개의 정수를 입력받는다.
그리고 최대값, 최소값, 모든 수의 합을 구하라.함수(최대, 최소, 합)를 정의하여 구현하시오.
*/
/*
#include <stdio.h>

int Maxdfd(int num1, int num2, int num3, int num4, int num5);
int Mindfdf(int num1, int num2, int num3, int num4, int num5);
int Add(int num1, int num2, int num3, int num4, int num5);

int maindfdf(void)
{
	int arr[5];
	int Maxnum = 0;
	int Minnum = 0;
	int i;
	int total = 0;

	for (i = 0; i < 5; i++)

	{

		printf("%d 번째 정수 입력 : ", i + 1);

		scanf("%d", &arr[i]);

	}

	Maxnum = Max(arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	printf("입력된 최대값 %d \n", Maxnum);


	Minnum = Min(arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("입력된 최소값 %d \n", Minnum);

	total = Add(arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("입력된 수의 총합 %d \n", total);

	return 0;

}

int Maxdfd(int num1, int num2, int num3, int num4, int num5)
{
	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
	{
		return num1;
	}
	else if (num2 > num3 && num2 > num4 && num2 > num5 && num2 > num1)
	{
		return num2;
	}
	else if (num3 > num4 && num3 > num5 && num3 > num1 && num3 > num2)
	{
		return num3;
	}
	else if (num4 > num5 && num4 > num1 && num4 > num2 && num4 > num3)
	{
		return num4;
	}
	else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
	{
		return num5;
	}
}

int Mindfdf(int num1, int num2, int num3, int num4, int num5)
{

	if (num1 < num2 && num1 < num3 && num1 < num4 &&num1 < num5)
	{
		return num1;
	}
	else if (num2 < num3 && num2 < num4 && num2 < num5 && num2 < num1)
	{
		return num2;
	}
	else if (num3 < num4 && num3 < num5 && num3 < num1 && num3 < num2)
	{
		return num3;
	}
	else if (num4 < num5 && num4 < num1 && num4 < num2 && num4 < num3)
	{
		return num4;
	}
	else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
	{
		return num4;
	}

	
}

int Add(int num1, int num2, int num3, int num4, int num5)
{
	return num1 + num2 + num3 + num4 + num5;	
}


*/