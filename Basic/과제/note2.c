/*
문제4
영단어를 char형 배열에 저장한다. 그 다음 영단어를 역순으로 뒤집는다.
그리고 입력했던 단어와 뒤집어진 단어를 출력한다.
*/

#include <stdio.h>

int main(void)
{
	char word[20] = { 0 };
	int i = 0;

	printf("영단어를 입력하시오: ");
	scanf("%s", word);

	for (i = 0; i != '\0'; i++)
	{
		printf("%s", word);
	}

	for (i; i != 0; i--)
	{
		printf("%c", word[i]);
	}

	return 0;
}
