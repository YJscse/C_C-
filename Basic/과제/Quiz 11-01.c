/*
���̰� 5�� int�� �迭�� �����ؼ� ����ڷκ��� 5���� ������ �Է¹޴´�.
�׸��� �ִ밪, �ּҰ�, ��� ���� ���� ���϶�.�Լ�(�ִ�, �ּ�, ��)�� �����Ͽ� �����Ͻÿ�.
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

		printf("%d ��° ���� �Է� : ", i + 1);

		scanf("%d", &arr[i]);

	}

	Maxnum = Max(arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	printf("�Էµ� �ִ밪 %d \n", Maxnum);


	Minnum = Min(arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("�Էµ� �ּҰ� %d \n", Minnum);

	total = Add(arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("�Էµ� ���� ���� %d \n", total);

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