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
		printf("��ǻ�Ͱ� �����Ѱ�: %d \n", com);
		if (user == com)
		{
			printf("%d �����Դϴ�! �����մϴ�! \n", user);
			break;
		}
		else
		{
			int num1 = 5;
			for (num1; num1 >= 1; num1--)
			{
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
				else if (user == com)
				{
					printf("%d �����Դϴ�! �����մϴ�! \n", user);
				}
				printf("���̶�� �����մϱ�?(0 to 100): ");
				scanf("%d", &user);
			}
		}

		printf("��: %d \n", com);
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
	printf("�߸� �Է��ϼ̽��ϴ�. #1 \n\n");
	num = 0;
	continue;
}
if (ans1 == 'q' || ans1 == 'Q')
{
	printf("���� \n");
	break;
}
*/