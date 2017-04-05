#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com, user;
	int count, num;
	char ans1 = 'y';
	char ans2 = 'n';

	srand((int)time(NULL));

	printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n");
	printf("당신은 그 숫자를 6회안에 맞추시면 됩니다. \n\n");
	while (1)
	{
		
		printf("몇이라고 생각합니까? (0 to 100): ");

		while (1)
		{
			scanf("%c", &ans1);

			if (ans1 != 10)
			{
				scanf("%c", &ans2);
			}

			if (ans1 == 10 || ans2 == 10)
			{
				break;
			}
			num++;

		}

		user = ans1 - 48;
		com = rand() % 100 + 1;

		if (num == 0 || num == 1)
		{
			for (count = 5; count > 0; count--)
			{
				if (user < com)
				{
					printf("%d 보다 큽니다", user);				
				}
				else if (user > com)
				{
					printf("%d 보다 작습니다.", user);
				}
				else if (user == com)
				{
					printf("%d 정답입니다.", com);
					break;
				}
				else
				{
					printf("다시 입력해주세요.(0 to 100) ");
					count++;
				}
				printf("[ %d ] 회 남았습니다.", count);
				printf("몇이라고 생각합니까? ");
				scanf("%d", &user);
			}
		}
		else if (num > 1)
		{
			printf("다시 입력해주세요.(0 to 100)");
			continue;
		}
		else if(user == com)
		{
			printf("%d 정답입니다! 한번에 맞추셨네요!", &user);
		}
		else
		{
			printf("다시 입력해주세요.(0 to 100)");
			continue;
		}
		printf("게임을 계속 하시겠습니까? y/n");
		
		while (ans1 == 'y')
		{
			scanf("%c", &ans1);

			if (ans1 == 'n')
			{
				printf("bye \n");
				break;
			}
			else
			{
				printf("아무거나 누르지 마세요");
				continue;
			}
		}
	}

	return 0;
}