#include <stdio.h>

int main11_05(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0';
	printf("string: %s \n", str); // 9��° ��ҿ� �� ���� ����

	str[6] = '\0';
	printf("string: %s \n", str); // 7��° ��ҿ� �� ���� ����

	str[1] = '\0';
	printf("string: %s \n", str); // 2��° ��ҿ� �� ���� ����

	return 0;
}