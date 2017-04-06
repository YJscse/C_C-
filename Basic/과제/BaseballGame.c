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

int NumOX125(int user[], int len)
{
	int ox = 0;

	for (int i = 0; i < len; i++)
	{
		if (user[i] < 1 || user[i] > 9)
			ox++;
	}

	if (ox > 0)
		return 0;
	else
		return 1;
}

int main123456789(void)
{
	int com[50], user[50];
	char temp[] = "";
	int len = 0;
	int strike = 0, ball = 0, count = 0;
	int tf = 0, ox = 0;

	srand((int)time(NULL));

	com[0] = rand() % 9 + 1;
	do
	{
		com[1] = rand() % 9 + 1;
	} while (com[0] == com[1]);

	do
	{
		com[2] = rand() % 9 + 1;
	} while (com[2] == com[1] || com[2] == com[0]);

	printf("���� �߱������� �����մϴ�. \n");
	printf("�� �ڸ� ���ڸ� �Է��ϼ��� (1 ~ 9) \n\n");

	printf("����: %d%d%d", com[0], com[1], com[2]);

	while (1)
	{
		count++;

		printf("���ڸ� �Է��ϼ���(%dȸ)\t", count);
		scanf("%s", temp);

		while (temp[len] != '\0')
		{
			len++;
		}

		if (len != 3)  // 3�ڸ� ���� �̿ܿ� ���� �Է������� ó��
		{
			printf("�ٽ� �Է����ּ��� \n\n");
			len = 0;
			count--;
			continue;
		}

		for (int i = 0; i < len; i++)
		{
			user[i] = temp[i] - 48;
		}

		ox = NumOX125(user, len);

		if (ox == 1)
		{
			for (int i = 0; i < len; i++)
			{
				for (int j = i + 1; j < len; j++)
				{
					if (user[i] == user[j])
					{
						tf++;
					}
				}
			}
			if (tf > 0)   // �ߺ����� ó��
			{
				tf = 0;
				printf("�ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է����ּ���. \n\n");
				len = 0;
				count--;
				continue;
			}
			for (int i = 0; i < len; i++)
			{
				for (int j = 0; j < len; j++)
				{
					if (com[i] == user[j])
					{
						if (i == j)
						{
							strike++;
						}
						else
						{
							ball++;
						}
					}
					
				}
			}
			if (strike == 0 && ball == 0)
			{
				printf("OUT\n\n");
			}
			else if (strike == len)
			{
				printf("����� �̰���ϴ�.\n");
				break;
			}
			else
			{
				printf("%d strike \t %d ball \nn", strike, ball);
			}
			strike = 0;
			ball = 0;
		}
		else
		{
			printf("�ٽ� �Է����ּ���. \n\n");
			len = 0;
			count--;
			continue;
		}

	}
	return 0;
}