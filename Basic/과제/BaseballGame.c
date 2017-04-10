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


int main12316(void)
{
	char user[4];
	int com[3];
	int st = 0, ba = 0, tn = 0, ou = 0;

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

	printf("답 : %d%d%d \n", com[0], com[1], com[2]);
	printf("숫자야구를 시작합니다. \n");
	printf("몇이라고 생각하십니까? \n");

	while (1)
	{
		printf("정수 입력 : ");
		scanf("%s", user);

		user[0] = user[0] - 48;
		user[1] = user[1] - 48;
		user[2] = user[2] - 48;

		if (user[0] > 9 || user[1] > 9 || user[2] > 9 || user[3] != 0)
		{
			printf("잘못 입력하셨습니다. 3자리 정수만 입력해주세요. \n");
			continue;
		}

		else if (user[0] < 1 || user[1] < 1 || user[2] < 1)
		{
			printf("잘못 입력하셨습니다. 3자리 정수만 입력해주세요. \n");
			continue;
		}

		if (user[0] == com[0])
		{
			st++;
		}

		else if (user[0] == com[1] || user[0] == com[2])
		{
			ba++;
		}

		if (user[1] == com[1])
		{
			st++;
		}

		else if (user[1] == com[0] || user[1] == com[2])
		{
			ba++;
		}

		if (user[2] == com[2])
		{
			st++;
		}

		else if (user[2] == com[0] || user[2] == com[1])
		{
			ba++;
		}
		tn++;

		if (st == 0 && ba == 0)
		{
			ou++;
		}

		printf("%d Strike! %d Ball! %d Out!(%d회) \n", st, ba, ou, tn);

		if (st == 3)
		{
			printf("축하합니다!! 승리하셨습니다. \n");
			break;
		}
		st = 0, ba = 0, ou = 0;
	}
	return 0;
}
