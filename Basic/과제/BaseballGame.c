/*
1.중복되지 않는 3개의 정수를 생성한다. (1 ~ 9)
2.사용자는 3개의 숫자를 입력한다.
3.생성된 3개의 숫자를 맞추는데 위치까지 정확히 맞춰야 한다.숫자와 숫자의 위치까지 일치하면 strike 로 판정한다.
4.숫자는 맞지만 위치가 틀렸다면 ball \n로 판정한다.
5.숫자3개가 모두 일치하지 않으면  out으로 판정한다.
6.3 strike 가 되면 게임은 종료된다.
7.시도한 횟수를 표시한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1113(void)
{
	char usr[4];
	int com[3];
	int strike = 0, ball = 0;
	int count = 0;
	int out = 0;

	srand((int)time(NULL));
	
	
	while (1)
	{
		com[0] = rand() % 9 + 1;
		com[1] = rand() % 9 + 1;
		com[2] = rand() % 9 + 1;

		if (com[0] != com[1] && com[0] != com[2] && com[1] != com[2])
		{
			break;
		}
	}

	printf("%d%d%d", com[0], com[1], com[2]);

	printf("야구게임을 시작하겠습니다. \n");
	while (1)
	{
		printf("숫자를 입력해주세요 (1 ~ 9): ");
		scanf("%s", usr);

		usr[0] = usr[0] - 48;
		usr[1] = usr[1] - 48;
		usr[2] = usr[2] - 48;
		
	
		if (usr[0] > 9 || usr[1] > 9 || usr[2] > 9 || usr[3] != 0)
		{
			printf("잘못 입력하셨습니다. 3자리 정수만 입력해주세요. \n");
			continue;
		}
		else if (usr[0] < 1 || usr[1] < 1 || usr[2] < 1)
		{
			printf("잘못 입력하셨습니다. 3자리 정수만 입력해주세요. \n");
			continue;
		}

		if (usr[0] == com[0])
		{
			strike++;
		}
		else if (usr[0] == com[1] || usr[0] == com[2])
		{
			ball++;
		}
		else if (usr[1] == com[1])
		{
			strike++;
		}
		else if (usr[1] == com[0] || usr[1] == com[2])
		{
			ball++;
		}
		else if (usr[2] == com[2])
		{
			strike++;
		}
		else if (usr[2] == com[0] || usr[2] == com[1])
		{
			ball++;
		}
		count++;

		if (strike == 0 && ball == 0)
		{
			out++;
		}
		printf("%d Strike %d Ball %d Out(%d회) \n", strike, ball, out, count);

		if (strike == 3)
		{
			printf("축하합니다!! 승리하셨습니다. \n");
			break;
		}
		strike = 0, ball = 0, out = 0;
	}
	return 0;
}