#include <stdio.h>

int main0704(void)
{
	int num = 1, i;
	int total = 1;

	printf("������ �Է�: ");
	scanf("%d", &num);

	while (num >= 1)
	{
		printf("%d*", num);
		total = total * num;
		num--;
	}

	printf("\b =%d", total);

	return 0;
}