#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ma(void)
{
	int num = 0;
	printf("1���� 100���� ���ڸ� ����մϴ� \n");
	srand((int)time(NULL));

	for (num = 0; num < 100; num++)
	{
		printf("%d", (rand() % 100) + 1);
	}
	return 0;
}