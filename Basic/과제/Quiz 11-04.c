/*
문제4

영단어를 char형 배열에 저장한다.그 다음 영단어를 역순으로 뒤집는다.
그리고 입력했던 단어와 뒤집어진 단어를 출력한다.
*/

int main11_040(void)
{
	char str[50];
	int idx = 0;

	printf("영단어를 입력하시오");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	for (int i = 0; idx > i; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for (int i = idx - 1; i > -1; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");



	return 0;

}