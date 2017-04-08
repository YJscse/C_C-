#include <stdio.h>

int main1651dfd(void)
{
	int arr[4][4] = { 0 };
	int name[5] = { "이순신", "강감찬", "을지문덕", "권율", "총점" };
	int sub[5] = { "국어", "영어", "수학", "국사", "총점" };
	int ssum[4] = { 0 };
	int psum[4] = { 0 };
	int i, j, sum = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%s의 %s 성적을 입력하시오. ", name[i], sub[j]);
			scanf("%d", &arr[j][i]);
		}
	}

	printf("\n");
	printf("%-2s ", "구분");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			ssum[i] = ssum[i] + arr[i][j];
		}
	}
	//과목총점
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			psum[j] = psum[j] = arr[j][i];
		}
	}
	//학생총점
	for (i = 0; i < 4; i++)
	{
		sum = sum + psum[j] + ssum[i];
	}
	//모든총점
	for (i = 0; i < 5; i++)
	{
		printf("%-6s", name[i]);
	}
	//이름 출력
	for (i = 0; i < 4; i++)
	{
		printf("%-2s ", sub[i]);
		for (j = 0; j < 4; j++)
		{
			printf("%6d ", arr[i][j]);
		}
		printf("%4d", ssum[i]);
		printf("\n");
	}
	printf("%-2s ", "총점");
	for (i = 0; i < 4; i++)
	{
		printf("%6d ", psum[i]);
	}
	printf("%4d ", sum);
	printf("\n\n");

	return 0;
}

