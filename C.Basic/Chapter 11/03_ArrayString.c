#include <stdio.h>

int main11_03(void)
{
	char str[] = "Good morning!";

	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]); //���ڿ��� ������ NULL ���ڶ� �Ҹ��� \0�� �;��Ѵ�.
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';  // �迭 str�� ����� ���ڿ� �����ʹ� ���� ����!
	printf("���ڿ� ���: %s \n", str); // %s �� ���ڿ� ����ϴµ� �ʿ��� ���Ĺ���
	                                   // %s �� NULL ���ڸ� ���������� ����ؼ� ����Ʈ�Ѵ�.
	return 0;
}

