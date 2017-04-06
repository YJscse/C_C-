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

int NumOX125(int user[], int len)
{
	int ox = 0;

	for (int i = 0; i < len; i++)
	{
		if (user[i] < 1 || user[i] > 9)
			ox++;
	}

	if (ox > 0)
		return 0;
	else
		return 1;
}

int main123456789(void)
{
	int com[50], user[50];
	char temp[] = "";
	int len = 0;
	int strike = 0, ball = 0, count = 0;
	int tf = 0, ox = 0;

	srand((int)time(NULL));

	com[0] = rand() % 9 + 1;
	do
	{
		com[1] = rand() % 9 + 1;
	} while (com[0] == com[1]);

	do
	{
		com[2] = rand() % 9 + 1;
	} while (com[2] == com[1] || com[2] == com[0]);

	printf("숫자 야구게임을 시작합니다. \n");
	printf("세 자리 숫자를 입력하세요 (1 ~ 9) \n\n");

	printf("정답: %d%d%d", com[0], com[1], com[2]);

	while (1)
	{
		count++;

		printf("숫자를 입력하세요(%d회)\t", count);
		scanf("%s", temp);

		while (temp[len] != '\0')
		{
			len++;
		}

		if (len != 3)  // 3자리 숫자 이외에 것을 입력했을때 처리
		{
			printf("다시 입력해주세요 \n\n");
			len = 0;
			count--;
			continue;
		}

		for (int i = 0; i < len; i++)
		{
			user[i] = temp[i] - 48;
		}

		ox = NumOX125(user, len);

		if (ox == 1)
		{
			for (int i = 0; i < len; i++)
			{
				for (int j = i + 1; j < len; j++)
				{
					if (user[i] == user[j])
					{
						tf++;
					}
				}
			}
			if (tf > 0)   // 중복숫자 처리
			{
				tf = 0;
				printf("중복된 숫자가 있습니다. 다시 입력해주세요. \n\n");
				len = 0;
				count--;
				continue;
			}
			for (int i = 0; i < len; i++)
			{
				for (int j = 0; j < len; j++)
				{
					if (com[i] == user[j])
					{
						if (i == j)
						{
							strike++;
						}
						else
						{
							ball++;
						}
					}
					
				}
			}
			if (strike == 0 && ball == 0)
			{
				printf("OUT\n\n");
			}
			else if (strike == len)
			{
				printf("당신이 이겼습니다.\n");
				break;
			}
			else
			{
				printf("%d strike \t %d ball \nn", strike, ball);
			}
			strike = 0;
			ball = 0;
		}
		else
		{
			printf("다시 입력해주세요. \n\n");
			len = 0;
			count--;
			continue;
		}

	}
	return 0;
}