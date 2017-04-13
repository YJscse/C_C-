int main()
{
	int num[3][3] = { { 0 } };
	int i, j;

	srand((unsigned int)time(NULL));

	for (i = 0; i<9; i++)
	{
		num[i / 3][i % 3] = rand() % 9 + 1;
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

	return 0;             // 이차원 배열 중복x 랜덤값 소스
}