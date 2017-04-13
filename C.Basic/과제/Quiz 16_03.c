#include <stdio.h>

int main16_03(void)
{
	int arr[6][6] = 
	{
		{"구분", "이순신", "강감찬", "을지문덕", "권율", "총점"},
		{"국어"},
		{"영어"},
		{"수학"},
		{"국사"},
		{"총점"}
	};
	int i = 0, j = 1;

	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			printf("%s의 %s점수 입력: ", arr[0][i], arr[j][0]);
			scanf("%d", &arr[j][i]);
		}
	}
	// 성적입력
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			arr[5][i] = arr[5][i] + arr[j][i];
		}
	}
	// 학생 총점
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			arr[i][5] = arr[i][5] + arr[i][j];
		}
	}
	// 과목 총점
	for (j = 1; j < 5; j++)
		{
			arr[5][5] = arr[5][5] + arr[5][j];
		}
	// 총점

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (i == 0)
			{
				printf("%-9s", arr[i][j]);
			}
			else if (j == 0)
			{
				printf("%-5s", arr[i][j]);
			}
			else
			{
				printf("%9d", arr[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
	

}

