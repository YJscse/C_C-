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
<<<<<<< HEAD
	int usr[3];       //문자 배열로 변수 선언
	int com[3];
	int temp; //
	int st, ba, ou;   // 스트라이크, 볼, 아웃
	int count = 0;    //게임횟수
	int i, j;
	srand((int)time(NULL));

	for (i = 0; i < 3; i++)
	{
		temp = rand() % 9 + 1;
		com[i] = temp;      // 컴퓨터의 숫자를 temp에 저장
		for (j = 0; j < i; j++)
		{
			if (temp == com[j] && i != j)
			{
				i--;
			}
		}
	}
	while (1)  // 게임시작
	{

		//printf("정답: %d%d%d", com[0], com[1], com[2])
		printf("[%d회차 숫자 야구] \n", count);
		while (1)
		{
			printf("(1 ~ 9)중에 숫자 입력하시오: ");
			scanf("%d %d %d", usr[0], usr[1], usr[2]);

			if (usr[0] < 1 || usr[0] > 9 || usr[1] < 1 || usr[1] > 9 || usr[2] < 1 || usr[2] > 9)
			{
				printf("다시 입력해주세요");
				continue;
			}
			else if (usr[0] == usr[1] || usr[0] == usr[2] || usr[1] == usr[2])
			{
				printf("중복된 숫자는 안됩니다 \n다시 입력해주세요");
				continue;
			}
			break;
		}
		st = 0;
		ba = 0;
		ou = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (usr[i] == com[j])
=======
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
>>>>>>> a2a5ffe33feef2dcb097b53730c6b864bb7e0234
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
<<<<<<< HEAD
		}
		printf("%d strike %d ball \n", st, ba);
		printf("[%d] 회 시도했습니다.");
		if (st == 3)
		{
			printf("맞췄습니다. \n\n");
			break;
		}
	}
}		
=======
			printf("%d Strike %d Ball % Out");


		}

	}
}
>>>>>>> a2a5ffe33feef2dcb097b53730c6b864bb7e0234
