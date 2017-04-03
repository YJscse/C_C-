#include <stdio.h>

int main2(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num = num + 0.1; // 이 연산을 총 100회 진행함

	printf("0.1을 100번 더한 결과: %f \n", num);

	return 0;
}

//컴퓨터는 정수만 정확하게 계산한다.