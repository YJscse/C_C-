#include <conio.h>  // Ű �Է½� �ʿ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int*);
//Ű�� �Է¹ޱ�
int get_directionkey() // ����Ű�� �Է¹޴� �Լ�
{
	int key;
	key = getch();


	if (key == 224) // ����Ű
	{
		return getch();
	}
	return 0;   //����Ű �ƴ�
}

//�����̱�

int main(void)
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	int key;
	int com[3][3];
	random(com);
	
	
	while (1)
	{
		
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				com[i][j];
			}
			printf("\n");
		}
		
		printf("����Ű�� ��������");
		key = get_directionkey();

		switch (key)
		{
		case 77:    //RIGHT
			if (i == 0 || i == 1 || i == 2)
			{
				com[i][j] = com[i][j - 1];
				com[i][j - 1] = 0;
				break;
			}
		case 75:    //LEFT
			if (i == 0 || i == 1 || i == 2)
			{
				com[i][j] = com[i][j + 1];
				com[i][j + 1] = 0;
				break;
			}
		case 72:    //UP
			if (j = 0 || j == 1 || j == 2)
			{
				com[i][j] = com[i + 1][j];
				com[i + 1][j] = 0;
			}
			break;

		case 80:    //DOWN
			if (j = 0 || j == 1 || j == 2)
			{
				com[i][j] = com[i - 1][j];
				com[i - 1][j] = 0;
			}
			break;
		}
		system("cls"); //�ܼ� ȭ���� �����
	}


}

void random(int *com)   //���� ���� ����
{
	int num[3][3] = { { 0 } };
	int i, j;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 9; i++)
	{
		num[i / 3][i % 3] = rand() % 9;

		for (j = 0; j < i; j++)
		{
			if (num[i / 3][i % 3] == num[j / 3][j % 3])
			{
				--i;
				break;
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", num[i][j]);
		}
			printf("\n");
	}

		
}

	
	





