#include <stdio.h>

int main15_02(void)
{
	int num[10] = { 0 };
	int i;
	int nom = 0;

	printf("정수를 10개 입력하시오: ");
	
	for (i = 0; i < 10; i++)     // 배열로 사용자의 입력을 받는다
	{
		scanf("%d", &num[i]);	
	}

	for (i = 0; i < 10; i++)  // 홀수는 앞에서부터 출력
	{
		nom = num[i] % 2;
		if (nom == 1)
		{
			printf("%d ", num[i]);
		}
		
	}

	for (i = 9; i > -1; i--)  // 짝수는 뒤에서부터 출력
	{
		nom = num[i] % 2;
		if (nom == 0)
		{
			printf("%d ", num[i]);
		}

	}
	
	return 0;

}