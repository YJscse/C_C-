#include <stdio.h>

int main07_01(void)
{
	int num;
	int total = 0;

	do
	{
		printf("������ �Է�: ");
		scanf("%d", &num);
		total = total + num;

	} while (num != 0);

	printf("����: %d \n", total);

	return;
}