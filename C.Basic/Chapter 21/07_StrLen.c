#include <stdio.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);     //���ڿ� ���� ���ԵǴ� �� ���ڸ� ���ִ� �Լ�
	str[len - 1] = 0;
}

int main21_07(void)
{
	char str[100];

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);

	printf("����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("����: %d, ����: %s \n", strlen(str), str);

	return 0;
}


// strlen() �� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�