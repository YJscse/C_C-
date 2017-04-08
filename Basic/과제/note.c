#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main21216d(void)
{
	int com[3] = { 0 };
	int user[3] = { 0 };
	int count = 0;
	int st = 0, ba = 0, ou = 0;
	int i = 0, j = 0;

	srand((int)time(NULL));

	while (1)
	{
		com[0] = rand() % 9 + 1;
		com[1] = rand() % 9 + 1;
		com[2] = rand() % 9 + 1;
		if (com[0] == com[1] || com[0] == com[2] || com[1] == com[2])
		{
			continue;
		}
		printf("답: %d%d%d \n", com[0], com[1], com[2]);

		printf("숫자 야구 게임 시작! \n");
		printf("몇입니까? \n");
		
		for (i = 0; i < 3; i++)
		{
			scanf("%d", user[i]);
			for (j = 0; j < 3; j++)
			{
				
			}
		}

		
		

	}
}