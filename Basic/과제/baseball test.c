/*
1.�ߺ����� �ʴ� 3���� ������ �����Ѵ�. (1 ~ 9)
2.����ڴ� 3���� ���ڸ� �Է��Ѵ�.
3.������ 3���� ���ڸ� ���ߴµ� ��ġ���� ��Ȯ�� ����� �Ѵ�.���ڿ� ������ ��ġ���� ��ġ�ϸ� strike �� �����Ѵ�.
4.���ڴ� ������ ��ġ�� Ʋ�ȴٸ� ball \n�� �����Ѵ�.
5.����3���� ��� ��ġ���� ������  out���� �����Ѵ�.
6.3 strike �� �Ǹ� ������ ����ȴ�.
7.�õ��� Ƚ���� ǥ���Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maindfdf(void)
{
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


			printf("����: %d%d%d", com[0], com[1], com[2]);
			printf("���� �߱� ������ �����մϴ�.\n(1 ~ 9)������ ���ڸ� 3�� �Է��� �ּ���");
			printf("%d", usr[1]);
			for (int i = 0; i < 3; i++)
			{
				if (usr[i] > 9)
				{
					printf("�ٽ� �Է����ֽʽÿ�.");
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
			printf("%d Strike %d Ball % Out");


		}

	}
}