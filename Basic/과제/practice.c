#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1651651(void)
{
	int com = 0;
	int user = 0;
	int num = 0;
	char ans1 = 'y';
	char ans2 = 'n';
	

	srand((int)time(NULL));

	while (1)
	{
	

		printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");
		printf("���̶�� �����մϱ�?(0 to 100): ");
		
		while (1)
		{
			scanf("%c", &ans1);
			if (ans1 != 10)
			{
				scanf("%c", &ans2);
				
			}

			printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);


			if (ans1 == 10 || ans2 == 10)
			{
				break;
			}
		}
	
		user = ans1 - 48;
		com = rand() % 101;

		if (user == com)
		{
			printf("%d �����Դϴ�! �����մϴ�! \n", user);
		}
		else
		{
			int num1 = 5;

			for (num1; num1 >= 1; num1--)
			{
				
				printf("���̶�� �����մϱ�?(0 to 100): ");
				scanf("%d", &user);

				if (user > com)
				{
					printf("%d ���� ���� ���ں��� Ů�ϴ�.\n", user);
					printf("[ %d ]�� ��ȸ�� ���ҽ��ϴ�.\n\n", num1 - 1);
				}
				else if (user < com)
				{
					printf("%d ���� ���� ���ں��� �۽��ϴ�.\n", user);
					printf("[ %d ]�� ��ȸ�� ���ҽ��ϴ�.\n\n", num1 - 1);
				}
				else if (user = com)
				{
					printf("%d �����Դϴ�! �����մϴ�! \n", user);	
				}
			}
		}
		printf("����ؼ� �÷��� �Ͻðڽ��ϱ�? y/n : ");
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
int Game(int user, int com)
{
	if (user == com)
	{
		printf("%d �����Դϴ�! �����մϴ�! \n", user);
	}
	else
	{
		int num1 = 5;

		for (num1; num1 >= 0; num1--)
		{

			printf("���̶�� �����մϱ�?(0 to 100): ");
			scanf("%d", &user);


			if (user > com)
			{
				printf("%d ���� ���� ���ں��� Ů�ϴ�.\n", user);
				printf("[ %d ]�� ��ȸ�� ���ҽ��ϴ�.\n\n", num1);
			}
			else if (user < com)
			{
				printf("%d ���� ���� ���ں��� �۽��ϴ�.\n", user);
				printf("[ %d ]�� ��ȸ�� ���ҽ��ϴ�.\n\n", num1);
			}
			else
			{

				break;
			}

		}
		printf("�̤� ������ %d �̾����ϴ�. \n", com);
	}
	printf("����ؼ� �÷��� �Ͻðڽ��ϱ�? y/n \n");
	scanf("%c", &ans1);
	
}
*/