#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com, user=0;
	int count, num=0;
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
			//printf("user : %d .. ans1 : %d .. num : %d \n", user, ans1, num);
			num++;

			if (ans1 == 10 || ans2 == 10)
			{
				break;
			}
			

		}
		

		user = ans1 - 48;
		com = rand() % 100 + 1;

		if (num == 0 || num == 1)
		{
			for (count = 5; count > 0; count--)
			{
				if (user < com)
				{
					printf("%d ���� Ů�ϴ� \n", user);				
				}
				else if (user > com)
				{
					printf("%d ���� �۽��ϴ�. \n", user);
				}
				else if (user == com)
				{
					printf("%d �����Դϴ�. \n", com);
					break;
				}
				else
				{
					printf("�ٽ� �Է����ּ���.(0 to 100) \n");
					count++;
				}
				printf("[ %d ] ȸ ���ҽ��ϴ�. \n", count);
				printf("���̶�� �����մϱ�? \n");
				scanf("%d", &user);
			}
		}
		else if (num > 2)
		{
			printf("�ٽ� �Է����ּ���.(0 to 100) \n");
			continue;
		}
		else if(user == com)
		{
			printf("%d �����Դϴ�! �ѹ��� ���߼̳׿�!", &user);
		}
		else
		{
			printf("�ٽ� �Է����ּ���.(0 to 100) \n");
			continue;
		}
		printf("������ ��� �Ͻðڽ��ϱ�? y/n");

		while (1)
		{
			scanf("%c", &ans1);

			if (ans1 != 10)
			{
				scanf("%c", &ans2);
			}
			//printf("user : %d .. ans1 : %d .. num : %d \n", user, ans1, num);
			num++;

			if (ans1 == 10 || ans2 == 10)
			{
				break;
			}


		}
		

		
	}

	return 0;
}