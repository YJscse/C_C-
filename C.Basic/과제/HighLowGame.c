#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main12315(void)
{
	int com = 0, user = 0;
	int count = 0, num = 0;
	int i = 0;
	char ans1 = 'y';
	char ans2 = 'n';

	srand((int)time(NULL));

	printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
	printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");

	while (1)
	{

		printf("���̶�� �����մϱ�? (0 to 100): ");
		scanf("%d", &user);
		com = rand() % 101;

		if (user > -1 && user < 101)
		{
			for (count = 5; count > 0; count--)
			{
				if (user < com && user > -1 && user < 101)
				{
					printf("%d ���� Ů�ϴ� \n", user);
				}
				else if (user > com && user > -1 && user < 101)
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
		else if (user < 0 || user > 100)
		{
			printf("�ٽ� �Է����ּ���.(0 to 100) \n");
			continue;
		}
		else if (user == com)
		{
			printf("%d �����Դϴ�! �ѹ��� ���߼̳׿�!", &user);
			break;
		}
		else
		{

			printf("�ٽ� �Է����ּ���.(0 to 100) \n");
			continue;
		}


		num = 0;
		while (1)
		{
			printf("������ �ٽ� �����ϰڽ��ϱ�? (Y/N): ");
			while (1)
			{
				scanf("%c", &ans1);

				if (ans1 != 10)
				{
					scanf("%c", &ans2);
					num++;
					break;
				}
				else
				{
					continue;
				}

				if (ans2 == 10)
				{
					break;
				}
				num++;

			}

			if (num == 1)
			{
				if (ans2 == 10)
				{
					if (ans1 == 'y' || ans1 == 'Y')
					{
						printf("������ �ٽ� �����ϰڽ��ϴ�. \n\n");
						i = 0;
						num = 0;
						break;
					}
					else if (ans1 == 'n' || ans1 == 'N')
					{
						printf("bye \n");
						num = 0;
						i = 1;
						break;
					}
					else
					{
						printf("y �� n �߿� �Է����ּ��� \n\n");
						num = 0;
						continue;
					}
				}
			}
			else
			{
				printf("y �� n �߿� �Է����ּ��� \n\n");
				num = 0;
				continue;
			}

		}
		if (i == 1)
		{
			break;
		}
	}

	return 0;
}




