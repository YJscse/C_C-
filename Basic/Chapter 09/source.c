#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main322(void)
{
	int usr;
	int com;
	char ans1, ans2;

	srand((int)time(NULL));

	while (1)
	{
		printf("무엇을 내겠습니까? (1.가위 2.바위 3.보 q.종료");
		while (1)
		{
			scanf("%c", ans1);
			if (ans1 != 10)
			{
				scanf("%c", ans2);
			}
			
		}
	}

}
