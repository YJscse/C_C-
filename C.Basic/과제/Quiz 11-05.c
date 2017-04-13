/*
10자 이하인 영단어를 입력받아 아스키 코드값이 가장 큰 문자를 출력하라.
LOVE를 입력했다면 V가 출력되어야 한다.
*/

#include <stdio.h>

int Maxvv(char str[], int idx)
{
	int max;
	max = (int)str[0];

	for (int i = 0; i < idx; i++)
	{
		if (max < (int)str[i])
		{
			max = (int)str[i];
		}
		
	}
	return max;
}

int mainvv(void)
{
	int idx = 0;
	char str[] = "";
	int max;

	printf("영단어를 입력(10자 이하): ");
	scanf("%s", str);

	while (str[idx] != '\0')  
	{
		idx++;
	}

	max = Maxvv(str, idx);

	printf("가장큰 문자: %c \n", max);
	
	return 0;

}