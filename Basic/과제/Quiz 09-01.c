#include <stdio.h>

int AbsolBig(int num1, int num2, int num3);
int AbsolSmall(int num1, int num2, int num3);

int main09quiz(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("�� ���� ������ �Է�:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�� ���� ������ ���� ū �� : %d \n���� ���� ��: %d \n",
		AbsolBig(num1, num2, num3), AbsolSmall(num1, num2, num3));

	return 0;
}

int AbsolBig(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		if (num3 > num1)
			return num3;
		else
			return num1;
	}
	else if (num2 > num1)
	{
		if (num3 > num2)
			return num3;
		else
			return num2;
	}
	else
	{
		if (num2 > num1)
			return num2;
		else
			return num1;
	}

}

int AbsolSmall(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		if (num3 < num1)
			return num3;
		else
			return num1;
	}
	else if (num2 < num1)
	{
		if (num3 < num2)
			return num3;
		else
			return num2;
	}
	else
	{
		if (num2 < num1)
			return num2;
		else
			return num1;
	}

}