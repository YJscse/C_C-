#include <stdio.h>

int main08_03(void)
{
	int sub1 = 0, sub2 = 0, sub3 = 0;
	int num = 0;
	int result = 0;

	printf("���� ���� ���� ������ ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%d%d%d", &sub1, &sub2, &sub3);

	result = (sub1 + sub2 + sub3) / 3;

	if (result >= 90)
	{
		printf("���: %d ���� A", result);
	}
	else if (result >= 80)
	{
		printf("���: %d ���� B", result);
	}
	else if (result >= 70)
	{
		printf("���: %d ���� C", result);
	}
	else if (result >= 50)
	{
		printf("���: %d ���� D", result);
	}
	else
	{
		printf("���: %d ���� F", result);
	}
}