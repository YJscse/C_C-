#include <conio.h>  // 키 입력시 필요
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int*);
//키값 입력받기
int get_directionkey() // 방향키를 입력받는 함수
{
	int key;
	key = getch();


	if (key == 224) // 방향키
	{
		return getch();
	}
	return 0;   //방향키 아님
}

//움직이기

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
		
		printf("방향키를 누르세요");
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
		system("cls"); //콘솔 화면을 지우기
	}


}

void random(int *com)   //숫자 랜덤 생성
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

	
	





