#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main15158()
{
	int usr;
	int com;
	char ans1 = 'q';
	char ans2 = 'q';

	srand((int)time(NULL));

	int num = 0;
	while (1)
	{

		printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보, q:종료) : ");

		while (1)
		{

			// %c 로 입력을 받을 경우... 입력한 문자수 +1 만큼 루프가 돈다.
			// 1 + Enter, 11 + Enter, 111 + Enter
			scanf("%c", &ans1);
			if (ans1 != 10) 
			{
				scanf("%c", &ans2);
			}
			//printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);

			num++;

			if (ans1 == 10 || ans2 == 10) {
				break;
			}
		}

		if (num == 1) 
		{
			if (ans2 == 10)
			{
				//printf("num : %d \n", num);
				num = 0;
			}
		}
		else {
			printf("잘못 입력하셨습니다. #1 \n\n");
			num = 0;
			continue;
		}

		if (ans1 == 'q' || ans1 == 'Q')
		{
			printf("종료 \n");
			break;
		}

		usr = ans1 - 48;
		com = rand() % 3 + 1;

		if (usr == 1)
		{
			if (com == 1)
			{
				printf("사용자: 가위 , 컴퓨터: 가위\n");
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
		else if (usr == 2)
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
		else if (usr == 3)
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
		else
		{
			printf("잘못된 입력입니다.");
		}


	}

	return 0;
}

