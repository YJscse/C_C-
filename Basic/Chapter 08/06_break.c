#include <stdio.h>

int main8_06(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum = sum + num;
		if (sum > 5000)
		{
			break;  //break�� ���� ���� �ݺ��� Ż��
		}
		num++;

	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);

	return 0;
}