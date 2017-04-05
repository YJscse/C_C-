#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main2s1d63fsaf(void)
{
	int com = 0;
	int user = 0;
	int num = 0;
	char ans1 = 'y';
	char ans2 = 'n';

	srand((int)time(NULL));

	while (1)
	{
		printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n당신은 그 숫자를 6회안에 맞추시면 됩니다. \n\n");
		printf("몇이라고 생각합니까?(0 to 100): ");
		
		while (1)
		{
			scanf("%c", &ans1);
			if (ans1 != 10)
			{
				scanf("%c", &ans2);
			}
			printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);
			num++;

			if (ans1 == 10 || ans2 == 10)
			{

				break;
			}
		}
		if (num == 1 || num == 0)
		{
			if (ans2 == 10)
			{
				//printf("num : %d \n", num);
				num = 0;
			}
		}

		user = ans1 - 48;
		com = rand() % 101;
		printf("컴퓨터가 생각한값: %d \n", com);
		if (user == com)
		{
			printf("%d 정답입니다! 축하합니다! \n", user);
			break;
		}
		else
		{
			int num1 = 5;
			for (num1; num1 >= 1; num1--)
			{
				if (user > com)
				{
					printf("%d 제가 정한 숫자보다 큽니다.\n", user);
					printf("[ %d ]의 기회가 남았습니다.\n\n", num1);
				}
				else if (user < com)
				{
					printf("%d 제가 정한 숫자보다 작습니다.\n", user);
					printf("[ %d ]의 기회가 남았습니다.\n\n", num1);
				}
				else if (user == com)
				{
					printf("%d 정답입니다! 축하합니다! \n", user);
				}
				printf("몇이라고 생각합니까?(0 to 100): ");
				scanf("%d", &user);
			}
		}

		printf("답: %d \n", com);
		printf("계속해서 플레이 하시겠습니까? y/n : ");
		scanf("%c", &ans1);

		while (1)
		{
			scanf("%c", &ans1);

			if (ans1 != 10)
			{
				scanf("%c", &ans2);
			}
			num++;
			if (ans1 == 10 || ans2 == 10)
			{
				break;
			}
		}
		if (ans1 == 'y')
		{
			continue;
		}
		if (ans1 == 'n')
		{
			break;
		}
	}
	printf("bye \n");
	return 0;

}





/*

while (1)
{
	scanf("%c", &ans1);

	if (ans1 != 10)
	{
		scanf("%c", &ans2);
	}

	num++;

	if (ans1 == 10 || ans2 == 10)
	{
		break;
	}
}

if (num == 1)
{
	if (ans2 == 10)
	{
		num = 0;
	}
}
else
{
	printf("잘못 입력하셨습니다. #1 \n\n");
	num = 0;
	continue;
}
if (ans1 == 'q' || ans1 == 'Q')
{
	printf("종료 \n");
	break;
}
*/