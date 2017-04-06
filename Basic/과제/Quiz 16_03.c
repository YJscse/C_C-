#include <stdio.h>

int main(void)
{
	int point[4][4] = { 0 };
	int name[5] = { "이순신", "강감찬", "을지문덕", "권율", "총점" };
	int sub[5] = { "국어", "영어", "수학", "국사", "총점" };
	int psum[4] = { 0 };
	int ssum[4] = { 0 };
	int sum;
	int i = 0, j = 0;

	for(j = 0; j < 4; j++)
	{
		for (i = 0; i < 4; i++)
		{
			printf("%s의 %s 성적을 입력하시오", name[j], sub[i]);
			scanf("%d", point[i][j]);
		}

	
}