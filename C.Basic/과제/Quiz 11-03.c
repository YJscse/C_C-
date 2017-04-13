/*
하나의 영단어를 입력받아서 길이를 계산하여 출력하라. morning라고 입력하면 7이 출력되야한다.
*/

#include <stdio.h>

int main11_030(void)
{
	char str[50];
	int i = 0;

	printf("영단어를 입력하시오");
	scanf("%s", str);
	
	while (str[i] != '\0')
	{
		i++;
	}
	
	printf("문자열 길이: %d \n", i);

	return 0;

}