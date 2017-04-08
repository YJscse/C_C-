#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mainRandom()
{
	int com1;
	int com2;
	int com3;

	srand((int)time(NULL));

	
	while (1)
	{
		com1 = rand() % 10;
		com2 = rand() % 10;
		com3 = rand() % 10;

		if (com1 != com2 && com1 != com3 && com2 != com3)
		{
			printf("%d%d%d", com1, com2, com3);
			break;
		}
		else
		{
			continue;
		}
	}
	printf("\n");

	return 0;
}
