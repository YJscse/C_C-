#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main15158()
{
	int usr;
	int com;
	char ans1 = 'q';
	char ans2 = 'q';

	srand((int)time(NULL));

	int num = 0;
	while (1)
	{

		printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��, q:����) : ");

		while (1)
		{

			// %c �� �Է��� ���� ���... �Է��� ���ڼ� +1 ��ŭ ������ ����.
			// 1 + Enter, 11 + Enter, 111 + Enter
			scanf("%c", &ans1);
			if (ans1 != 10) 
			{
				scanf("%c", &ans2);
			}
			//printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);

			num++;

			if (ans1 == 10 || ans2 == 10) {
				break;
			}
		}

		if (num == 1) 
		{
			if (ans2 == 10)
			{
				//printf("num : %d \n", num);
				num = 0;
			}
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�. #1 \n\n");
			num = 0;
			continue;
		}

		if (ans1 == 'q' || ans1 == 'Q')
		{
			printf("���� \n");
			break;
		}

		usr = ans1 - 48;
		com = rand() % 3 + 1;

		if (usr == 1)
		{
			if (com == 1)
			{
				printf("�����: ���� , ��ǻ��: ����\n");
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
		else if (usr == 2)
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
		else if (usr == 3)
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
		else
		{
			printf("�߸��� �Է��Դϴ�.");
		}


	}

	return 0;
}

