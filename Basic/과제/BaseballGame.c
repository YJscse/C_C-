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

int main1113(void)
{
	char usr[4];
	int com[3];
	int strike = 0, ball = 0;
	int count = 0;
	int out = 0;

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

	printf("%d%d%d", com[0], com[1], com[2]);

	printf("�߱������� �����ϰڽ��ϴ�. \n");
	while (1)
	{
		printf("���ڸ� �Է����ּ��� (1 ~ 9): ");
		scanf("%s", usr);

		usr[0] = usr[0] - 48;
		usr[1] = usr[1] - 48;
		usr[2] = usr[2] - 48;
		
	
		if (usr[0] > 9 || usr[1] > 9 || usr[2] > 9 || usr[3] != 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. 3�ڸ� ������ �Է����ּ���. \n");
			continue;
		}
		else if (usr[0] < 1 || usr[1] < 1 || usr[2] < 1)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. 3�ڸ� ������ �Է����ּ���. \n");
			continue;
		}

		if (usr[0] == com[0])
		{
			strike++;
		}
		else if (usr[0] == com[1] || usr[0] == com[2])
		{
			ball++;
		}
		else if (usr[1] == com[1])
		{
			strike++;
		}
		else if (usr[1] == com[0] || usr[1] == com[2])
		{
			ball++;
		}
		else if (usr[2] == com[2])
		{
			strike++;
		}
		else if (usr[2] == com[0] || usr[2] == com[1])
		{
			ball++;
		}
		count++;

		if (strike == 0 && ball == 0)
		{
			out++;
		}
		printf("%d Strike %d Ball %d Out(%dȸ) \n", strike, ball, out, count);

		if (strike == 3)
		{
			printf("�����մϴ�!! �¸��ϼ̽��ϴ�. \n");
			break;
		}
		strike = 0, ball = 0, out = 0;
	}
	return 0;
}