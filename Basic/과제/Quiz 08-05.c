#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("5개의 정수를 입력하시오 \n");

	for (int i = 1; i < 6; i++)
	{
		printf("%d 번째 정수: ", i);
		scanf("%d", &num);
		
		if (num < 1)
		{
			printf("1이상의 정수를 입력해주십시오: ");
			i--;
			printf("\n");
		}

	}
	

}