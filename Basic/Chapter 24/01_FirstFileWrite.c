#include <stdio.h>

int main24_01(void)
{
	FILE * fp = fopen("data.txt", "wt");  //���� data.txt�� ��Ʈ���� �����ϵ�
	if (fp == NULL)                       // wt ���� ��Ʈ���� �����ض�
	{
		puts("���Ͽ��� ����!");
		return -1;   //�������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('A', fp);   // �� ���� A�� fp�� ����Ű�� ���Ͽ� �����ض�!
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);    //��Ʈ���� ����
	
	return 0;
}

// FILE * fp = fopen("C://Project//data.txt", "wt");    "wt" ���� ��� ��Ʈ���� �ǹ̰� ����ִ�.
// fopen �Լ�ȣ�� �� ��θ� ������ ����� ���� �ִ�.