#include <stdio.h>

int main24_03(void)
{
	FILE * fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	fputc('A', fp);   //���� A�� B�� fp�� ����Ű�� ���Ͽ� ����
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);// �� ���� ���ڿ��� fp�� ����Ű�� ���Ͽ� ����

	fclose(fp);
	return 0;
}