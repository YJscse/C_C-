#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int  com, per;
	char i;

	srand((int)time(NULL));

	printf("������ ���ڽ��ϱ�?(1.���� 2.���� 3.�� q.����): ");
	scanf("%d", &per);
	scanf("%c", &i);

	while (1)
	{
		com = rand() % 3 + 1;

		if (per == 1)
		{
			if (com == 1)
			{
				printf("�����: ���� ,��ǻ��: ����\n");
				printf("�����ϴ�. \n");
			}
			else if (com == 2)
			{
				printf("�����: ����, ��ǻ��: ����\n");
				printf("�����ϴ�. \n");
			}
			else
			{
				printf("�����: ����, ��ǻ��: ��\n");
				printf("�̰���ϴ�. \n");
			}
		}
		else if (per == 2)
		{
			if (com == 1)
			{
				printf("�����: ���� ,��ǻ��: ���� \n");
				printf("�̰���ϴ�. \n");
			}
			else if (com == 2)
			{
				printf("�����: ����, ��ǻ��: ���� \n");
				printf("�����ϴ�. \n");
			}
			else
			{
				printf("�����: ����, ��ǻ��: �� \n");
				printf("�����ϴ�. \n");
			}
		}
		else if (per == 3)
		{
			if (com == 1)
			{
				printf("�����: �� ,��ǻ��: ���� \n");
				printf("�����ϴ�. \n");
			}
			else if (com == 2)
			{
				printf("�����: ��, ��ǻ��: ���� \n");
				printf("�̰���ϴ�. \n");
			}
			else
			{
				printf("�����: ��, ��ǻ��: �� \n");
				printf("�����ϴ�. \n");
			}
		}
		else if(i == 'q' || i == 'Q')
		{
			printf("bye \n");
			break;
		}
		else
		{
			printf("�ٽ� �Է����ֽʽÿ�.(1.���� 2.���� 3.�� q.����): ");
			scanf("%d", &per);
			scanf("%c", &i);
			continue;
		}

		printf("������ ���ڽ��ϱ�?(1.���� 2.���� 3.�� q.����): ");
		scanf("%d", &per);
		scanf("%c", &i);
		
	}

	return 0;
}
