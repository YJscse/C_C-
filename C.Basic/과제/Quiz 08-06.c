#include <stdio.h>

int main08_06(void)
{
	int sum = 0;
	int num = 1;

	do
	{
		if (num % 2 == 0)
		{
			sum = sum + num;

		}
		num++;

	} while (num < 101);
	
	printf("1 ~ 100 ������ ������ ¦���� ��: %d \n", sum);


}