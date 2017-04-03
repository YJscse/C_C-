#include <stdio.h>

int main4(void)
{
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total = total + num;
	} while (num!= 0);
	
	printf("합계: %d \n", total);

	return 0;
}
// 최소한 1회 이상 실행되어야 하는 반복문은
// do ~ while문으로 구성하는 것이 자연스럽다.