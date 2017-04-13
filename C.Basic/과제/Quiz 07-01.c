#include <stdio.h>

int main07_01(void)
{
	int num;
	int total = 0;

	do
	{
		printf("정수를 입력: ");
		scanf("%d", &num);
		total = total + num;

	} while (num != 0);

	printf("총합: %d \n", total);

	return;
}