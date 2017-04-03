#include <stdio.h>

int main07_04(void)
{
	int dan, num;

	printf("¸î ´Ü? ");
	scanf("%d", &dan);

	for (num = 9; num > 0; num--)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
	}
	return 0;
}