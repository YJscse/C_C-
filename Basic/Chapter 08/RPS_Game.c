#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int  com, per;
	char i;

	srand((int)time(NULL));

	printf("무엇을 내겠습니까?(1.가위 2.바위 3.보 q.종료): ");
	scanf("%d", &per);
	scanf("%c", &i);

	while (1)
	{
		com = rand() % 3 + 1;

		if (per == 1)
		{
			if (com == 1)
			{
				printf("사용자: 가위 ,컴퓨터: 가위\n");
				printf("비겼습니다. \n");
			}
			else if (com == 2)
			{
				printf("사용자: 가위, 컴퓨터: 바위\n");
				printf("졌습니다. \n");
			}
			else
			{
				printf("사용자: 가위, 컴퓨터: 보\n");
				printf("이겼습니다. \n");
			}
		}
		else if (per == 2)
		{
			if (com == 1)
			{
				printf("사용자: 바위 ,컴퓨터: 가위 \n");
				printf("이겼습니다. \n");
			}
			else if (com == 2)
			{
				printf("사용자: 바위, 컴퓨터: 바위 \n");
				printf("비겼습니다. \n");
			}
			else
			{
				printf("사용자: 바위, 컴퓨터: 보 \n");
				printf("졌습니다. \n");
			}
		}
		else if (per == 3)
		{
			if (com == 1)
			{
				printf("사용자: 보 ,컴퓨터: 가위 \n");
				printf("졌습니다. \n");
			}
			else if (com == 2)
			{
				printf("사용자: 보, 컴퓨터: 바위 \n");
				printf("이겼습니다. \n");
			}
			else
			{
				printf("사용자: 보, 컴퓨터: 보 \n");
				printf("비겼습니다. \n");
			}
		}
		else if(i == 'q' || i == 'Q')
		{
			printf("bye \n");
			break;
		}
		else
		{
			printf("다시 입력해주십시오.(1.가위 2.바위 3.보 q.종료): ");
			scanf("%d", &per);
			scanf("%c", &i);
			continue;
		}

		printf("무엇을 내겠습니까?(1.가위 2.바위 3.보 q.종료): ");
		scanf("%d", &per);
		scanf("%c", &i);
		
	}

	return 0;
}
