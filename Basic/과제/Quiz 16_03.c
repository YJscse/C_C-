#include <stdio.h>

int main(void)
{
	int point[4][4] = { 0 };
	int name[5] = { "�̼���", "������", "��������", "����", "����" };
	int sub[5] = { "����", "����", "����", "����", "����" };
	int psum[4] = { 0 };
	int ssum[4] = { 0 };
	int sum;
	int i = 0, j = 0;

	for(j = 0; j < 4; j++)
	{
		for (i = 0; i < 4; i++)
		{
			printf("%s�� %s ������ �Է��Ͻÿ�", name[j], sub[i]);
			scanf("%d", point[i][j]);
		}

	
}