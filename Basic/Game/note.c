//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int com = 0, user = 0;
//	int count = 0, num = 0;
//	char ans1 = 'y';
//	char ans2 = 'n';
//
//	srand((int)time(NULL));
//	
//	printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
//	printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");
//
//	while (1)
//	{
//
//		printf("���̶�� �����մϱ�? (0 to 100): ");
//		
//		while (1)
//		{
//			scanf("%c", &ans1);
//
//			if (ans1 != 10)
//			{
//				scanf("%c", &ans2);
//			}
//			printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);
//			num++;
//
//			if (ans1 == 10 || ans2 == 10)
//			{
//				break;
//			}
//		}
//		
//		user = ans1 - 48;
//		com = rand() % 100 + 1;
//	
//		if (num == 0 || num == 1 || num == 2)
//		{
//			for (count = 5; count > 0; count--)
//			{
//				if (user < com)
//				{
//					printf("%d ���� Ů�ϴ� \n", user);
//				}
//				else if (user > com)
//				{
//					printf("%d ���� �۽��ϴ�. \n", user);
//				}
//				else if (user == com)
//				{
//					printf("%d �����Դϴ�. \n", com);
//					break;
//				}
//				else
//				{
//					printf("�ٽ� �Է����ּ���.(0 to 100) \n");
//					count++;
//				}
//				printf("[ %d ] ȸ ���ҽ��ϴ�. \n", count);
//				printf("���̶�� �����մϱ�? \n");
//				scanf("%d", &user);
//			}
//		}
//		else if (num > 2)
//		{
//			printf("aaaa");
//			printf("�ٽ� �Է����ּ���.(0 to 100) \n");
//			continue;
//		}
//		else if (user == com)
//		{
//			printf("%d �����Դϴ�! �ѹ��� ���߼̳׿�!", &user);
//		}
//		else
//		{
//			printf("�ٽ� �Է����ּ���.(0 to 100) \n");
//			continue;
//		}
//	
//
//		printf("������ ��� �Ͻðڽ��ϱ�? y/n \n");
//		scanf("%s", &ans2);
//		if (ans2 == 'n')
//		{
//			printf("bye \n");
//			break;
//		}
//		else if (ans2 == 'y')
//		{
//			printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
//			printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");
//			continue;
//		}
//		else
//		{
//			printf("�ƹ��ų� ���������ϱ� ������ �ٽ� �����ϰڽ��ϴ� \n");
//			continue;
//		}
//		
//	}
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com = 0, user = 0;
	int count = 0, num = 0;
	char ans1 = 'y';
	char ans2 = 'n';

	srand((int)time(NULL));

	printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
	printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");

	while (1)
	{

		printf("���̶�� �����մϱ�? (0 to 100): ");
		scanf("%d", &user);
		com = rand() % 10;
		if(user )

		else if (user > -1 && user < 101)
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


		printf("������ ��� �Ͻðڽ��ϱ�? y/n \n");

		while(1)
		{
			scanf("%c", &ans1);

			if (ans1 != 10)
			{
				scanf("%c", &ans2);
			}

			if (ans1 == 10 || ans2 == 10)
			{
				if (ans1 == 'n')
				{
					printf("bye \n");
					break;
				}
				else if (ans1 == 'y')
				{
					printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
					printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�. \n\n");
					break;
				}
				else
				{
					printf("�ƹ��ų� ���������ϱ� ������ �ٽ� �����ϰڽ��ϴ� \n");
					break;
				}
			}
		} 
	}
	return 0;
}