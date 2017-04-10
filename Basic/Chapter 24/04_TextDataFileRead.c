#include <stdio.h>

int main24_04(void)
{
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);    // \n을 만날때까지 read
	fgets(str, sizeof(str), fp);
	printf("%s", str);    // \n을 만날때까지 read

	fclose(fp);

	return 0;
}