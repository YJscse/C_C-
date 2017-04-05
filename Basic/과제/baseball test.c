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

int maindfdf(void)
{
	unsigned int usr[3];
	unsigned int com[3];
	int st = 0, ba = 0, ou = 0;
	int count = 0;

	while (1)
	{
		srand((int)time(NULL));

		com[0] = rand() % 3 + 1;
		com[1] = rand() % 3 + 1;
		com[2] = rand() % 3 + 1;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; com[i] != com[j]; j++)
			{

			}


			printf("정답: %d%d%d", com[0], com[1], com[2]);
			printf("숫자 야구 게임을 시작합니다.\n(1 ~ 9)사이의 숫자를 3개 입력해 주세요");
			printf("%d", usr[1]);
			for (int i = 0; i < 3; i++)
			{
				if (usr[i] > 9)
				{
					printf("다시 입력해주십시오.");
					scanf("%d%d%d", usr[1], usr[2], usr[3]);
				}
				break;
			}

			for (int a = 0; a < 3; a++)
			{
				for (int b = 0; b < 3; b++)
				{
					if (usr[a] == usr[b])
					{
						st++;
					}
					else
					{
						ba++;
					}
				}
			}
			printf("%d Strike %d Ball % Out");


		}

	}
}