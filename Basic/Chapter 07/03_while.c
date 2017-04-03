#include <stdio.h>

int main3(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10) // 2단부터 9단까지 반복
	{
		is = 1;

		while (is < 10) // 각 단의 1부터 9의 곱 표현
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		}

		cur++;
	}

	return 0;
}