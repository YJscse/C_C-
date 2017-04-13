#include <stdio.h>

int main2(void)
{
	int dan = 0, num1 = 1;
	
	printf("몇 단? : ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf(" %d x %d = %d \n", dan, num1, dan * num1);
		num1++;
	}
	
	return 0;
}
//구구단은 반복문을 이해하는데 사용되는 대표적인 예