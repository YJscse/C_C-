#include <stdio.h>
                          // y = 121,  h = 104, l = 108
int maindfdfdfdf(void)
{
	char user1, user2;
	int num = 0, com;
	int min = 1, max = 100;

	printf("���ݺ��� 1���� 100���� ������ �����ϼ���. \n");     // ���Ӽ���
	printf("�����ص� ���ڰ� ���� ������ ������ ũ�� h \n");
	printf("�׺��� ������ l \n�������� y��� �Է����ּ���.\n\n");

	while (1)
	{
		com = (min + max) / 2;               
		printf("%d �Դϱ�? \n", com);           

		while (1)
		{                       // ���� ó��
			scanf("%c", &user1);
			if (user1 != 10)
			{
				scanf("%c", &user2);
			}
			if(user1 == 10 || user2 == 10)
			{
				break;  // ���� Ż�⹮�� ������ ��� Ż���ض�
			}
			num++;            
		}

		if (num == 0)     //����ڰ� ����� �Է��������
		{
			if (user1 == 'h')               // ���ڰ� �ʹ� ������
			{
				max = com;           
				continue;             
			}
			else if (user1 == 'l')                //���ڰ� �ʹ� ������
			{
				min = com;
				continue;
			}
			else if (user1 == 'y')
			{
				printf("���� ����׿� ����.");   //�����϶�
				break;
			}
			else
			{
				printf("�ٽ� �Է����ּ���");   // ����ڰ� ����� �Է� ���������
				continue;
			}
		}
		else if (num != 0)
		{
			printf("�ٽ� �Է����ּ���");               
			continue;
		}
		else if (user1 == 'y')
		{
			printf("���� ����׿� ����.");
			break;
		}


	}

	return 0;
}
