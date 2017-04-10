#include <stdio.h>

int main24_03(void)
{
	FILE * fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	
	fputc('A', fp);   //문자 A와 B가 fp가 가리키는 파일에 저장
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);// 두 개의 문자열이 fp가 가리키는 파일에 저장

	fclose(fp);
	return 0;
}