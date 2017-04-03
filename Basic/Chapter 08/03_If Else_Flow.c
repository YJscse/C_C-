#include <stdio.h>

int main8_03(void)
{
	int num;

	printf("정수 입력: ");
	scanf("%d", &num);

	if (num > 0)
	{    //if 블록
		printf("입력 값은 0보다 작지 않다. \n");
	}
	else
	{    //else 블록
		printf("입력 값은 0보다 작다. \n");
	}

	return 0;
}
// if else 는 한문장임 사이에 다른 문장이 삽입될 수 없다.