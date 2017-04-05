//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int com = 0, user = 0;
//	int count = 0, num = 0;
//	char ans1 = 'y';
//	char ans2 = 'n';
//
//	srand((int)time(NULL));
//	
//	printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n");
//	printf("당신은 그 숫자를 6회안에 맞추시면 됩니다. \n\n");
//
//	while (1)
//	{
//
//		printf("몇이라고 생각합니까? (0 to 100): ");
//		
//		while (1)
//		{
//			scanf("%c", &ans1);
//
//			if (ans1 != 10)
//			{
//				scanf("%c", &ans2);
//			}
//			printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);
//			num++;
//
//			if (ans1 == 10 || ans2 == 10)
//			{
//				break;
//			}
//		}
//		
//		user = ans1 - 48;
//		com = rand() % 100 + 1;
//	
//		if (num == 0 || num == 1 || num == 2)
//		{
//			for (count = 5; count > 0; count--)
//			{
//				if (user < com)
//				{
//					printf("%d 보다 큽니다 \n", user);
//				}
//				else if (user > com)
//				{
//					printf("%d 보다 작습니다. \n", user);
//				}
//				else if (user == com)
//				{
//					printf("%d 정답입니다. \n", com);
//					break;
//				}
//				else
//				{
//					printf("다시 입력해주세요.(0 to 100) \n");
//					count++;
//				}
//				printf("[ %d ] 회 남았습니다. \n", count);
//				printf("몇이라고 생각합니까? \n");
//				scanf("%d", &user);
//			}
//		}
//		else if (num > 2)
//		{
//			printf("aaaa");
//			printf("다시 입력해주세요.(0 to 100) \n");
//			continue;
//		}
//		else if (user == com)
//		{
//			printf("%d 정답입니다! 한번에 맞추셨네요!", &user);
//		}
//		else
//		{
//			printf("다시 입력해주세요.(0 to 100) \n");
//			continue;
//		}
//	
//
//		printf("게임을 계속 하시겠습니까? y/n \n");
//		scanf("%s", &ans2);
//		if (ans2 == 'n')
//		{
//			printf("bye \n");
//			break;
//		}
//		else if (ans2 == 'y')
//		{
//			printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n");
//			printf("당신은 그 숫자를 6회안에 맞추시면 됩니다. \n\n");
//			continue;
//		}
//		else
//		{
//			printf("아무거나 누르셨으니까 게임은 다시 시작하겠습니다 \n");
//			continue;
//		}
//		
//	}
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com = 0, user = 0;
	int count = 0, num = 0;
	char ans1 = 'y';
	char ans2 = 'n';

	srand((int)time(NULL));

	printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n");
	printf("당신은 그 숫자를 6회안에 맞추시면 됩니다. \n\n");

	while (1)
	{

		printf("몇이라고 생각합니까? (0 to 100): ");
		scanf("%d", &user);
		com = rand() % 10;
		if(user )

		else if (user > -1 && user < 101)
		{
			for (count = 5; count > 0; count--)
			{
				if (user < com && user > -1 && user < 101)
				{
					printf("%d 보다 큽니다 \n", user);
				}
				else if (user > com && user > -1 && user < 101)
				{
					printf("%d 보다 작습니다. \n", user);
				}
				else if (user == com)
				{
					printf("%d 정답입니다. \n", com);
					break;
				}
				else 
				{
					printf("다시 입력해주세요.(0 to 100) \n");
					count++;
				}
				printf("[ %d ] 회 남았습니다. \n", count);
				printf("몇이라고 생각합니까? \n");
				scanf("%d", &user);
			}
		}
		else if (user < 0 || user > 100)
		{
			printf("다시 입력해주세요.(0 to 100) \n");
			continue;
		}
		else if (user == com)
		{
			printf("%d 정답입니다! 한번에 맞추셨네요!", &user);
			break;
		}
		else
		{
			printf("다시 입력해주세요.(0 to 100) \n");
			continue;
		}


		printf("게임을 계속 하시겠습니까? y/n \n");

		while(1)
		{
			scanf("%c", &ans1);

			if (ans1 != 10)
			{
				scanf("%c", &ans2);
			}

			if (ans1 == 10 || ans2 == 10)
			{
				if (ans1 == 'n')
				{
					printf("bye \n");
					break;
				}
				else if (ans1 == 'y')
				{
					printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n");
					printf("당신은 그 숫자를 6회안에 맞추시면 됩니다. \n\n");
					break;
				}
				else
				{
					printf("아무거나 누르셨으니까 게임은 다시 시작하겠습니다 \n");
					break;
				}
			}
		} 
	}
	return 0;
}