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
<<<<<<< HEAD
	int usr[3];       //���� �迭�� ���� ����
	int com[3];
	int temp; //
	int st, ba, ou;   // ��Ʈ����ũ, ��, �ƿ�
	int count = 0;    //����Ƚ��
	int i, j;
	srand((int)time(NULL));

	for (i = 0; i < 3; i++)
	{
		temp = rand() % 9 + 1;
		com[i] = temp;      // ��ǻ���� ���ڸ� temp�� ����
		for (j = 0; j < i; j++)
		{
			if (temp == com[j] && i != j)
			{
				i--;
			}
		}
	}
	while (1)  // ���ӽ���
	{

		//printf("����: %d%d%d", com[0], com[1], com[2])
		printf("[%dȸ�� ���� �߱�] \n", count);
		while (1)
		{
			printf("(1 ~ 9)�߿� ���� �Է��Ͻÿ�: ");
			scanf("%d %d %d", usr[0], usr[1], usr[2]);

			if (usr[0] < 1 || usr[0] > 9 || usr[1] < 1 || usr[1] > 9 || usr[2] < 1 || usr[2] > 9)
			{
				printf("�ٽ� �Է����ּ���");
				continue;
			}
			else if (usr[0] == usr[1] || usr[0] == usr[2] || usr[1] == usr[2])
			{
				printf("�ߺ��� ���ڴ� �ȵ˴ϴ� \n�ٽ� �Է����ּ���");
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


			printf("����: %d%d%d", com[0], com[1], com[2]);
			printf("���� �߱� ������ �����մϴ�.\n(1 ~ 9)������ ���ڸ� 3�� �Է��� �ּ���");
			printf("%d", usr[1]);
			for (int i = 0; i < 3; i++)
			{
				if (usr[i] > 9)
>>>>>>> a2a5ffe33feef2dcb097b53730c6b864bb7e0234
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
<<<<<<< HEAD
		}
		printf("%d strike %d ball \n", st, ba);
		printf("[%d] ȸ �õ��߽��ϴ�.");
		if (st == 3)
		{
			printf("������ϴ�. \n\n");
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
