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

int main(void)
{
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
				{
					st++;
				}
				else
				{
					ba++;
				}
			}
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