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


int main12316(void)
{
	char user[4];
	int com[3];
	int st = 0, ba = 0, tn = 0, ou = 0;

	srand((int)time(NULL));

	while (1)
	{
		com[0] = rand() % 9 + 1;
		com[1] = rand() % 9 + 1;
		com[2] = rand() % 9 + 1;

		if (com[0] != com[1] && com[0] != com[2] && com[1] != com[2])
		{
			break;
		}
	}

	printf("�� : %d%d%d \n", com[0], com[1], com[2]);
	printf("���ھ߱��� �����մϴ�. \n");
	printf("���̶�� �����Ͻʴϱ�? \n");

	while (1)
	{
		printf("���� �Է� : ");
		scanf("%s", user);

		user[0] = user[0] - 48;
		user[1] = user[1] - 48;
		user[2] = user[2] - 48;

		if (user[0] > 9 || user[1] > 9 || user[2] > 9 || user[3] != 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. 3�ڸ� ������ �Է����ּ���. \n");
			continue;
		}

		else if (user[0] < 1 || user[1] < 1 || user[2] < 1)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. 3�ڸ� ������ �Է����ּ���. \n");
			continue;
		}

		if (user[0] == com[0])
		{
			st++;
		}

		else if (user[0] == com[1] || user[0] == com[2])
		{
			ba++;
		}

		if (user[1] == com[1])
		{
			st++;
		}

		else if (user[1] == com[0] || user[1] == com[2])
		{
			ba++;
		}

		if (user[2] == com[2])
		{
			st++;
		}

		else if (user[2] == com[0] || user[2] == com[1])
		{
			ba++;
		}
		tn++;

		if (st == 0 && ba == 0)
		{
			ou++;
		}

		printf("%d Strike! %d Ball! %d Out!(%dȸ) \n", st, ba, ou, tn);

		if (st == 3)
		{
			printf("�����մϴ�!! �¸��ϼ̽��ϴ�. \n");
			break;
		}
		st = 0, ba = 0, ou = 0;
	}
	return 0;
}
