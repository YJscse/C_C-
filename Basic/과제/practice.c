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

	printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
	printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");
	while (1)
	{
		
		printf("���̶�� �����մϱ�? (0 to 100): ");

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
					printf("%d ���� Ů�ϴ�", user);				
				}
				else if (user > com)
				{
					printf("%d ���� �۽��ϴ�.", user);
				}
				else if (user == com)
				{
					printf("%d �����Դϴ�.", com);
					break;
				}
				else
				{
					printf("�ٽ� �Է����ּ���.(0 to 100) ");
					count++;
				}
				printf("[ %d ] ȸ ���ҽ��ϴ�.", count);
				printf("���̶�� �����մϱ�? ");
				scanf("%d", &user);
			}
		}
		else if (num > 1)
		{
			printf("�ٽ� �Է����ּ���.(0 to 100)");
			continue;
		}
		else if(user == com)
		{
			printf("%d �����Դϴ�! �ѹ��� ���߼̳׿�!", &user);
		}
		else
		{
			printf("�ٽ� �Է����ּ���.(0 to 100)");
			continue;
		}
		printf("������ ��� �Ͻðڽ��ϱ�? y/n");
		
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
				printf("�ƹ��ų� ������ ������");
				continue;
			}
		}
	}

	return 0;
}