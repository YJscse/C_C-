#include <stdio.h>

int main11_04(void)
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);  //���ڿ��� �Է� �޾Ƽ� �迭 str�� ����!
	// scanf �Լ��� �̿��ؼ� ���ڿ� �Է� �� ���Ĺ��� %s �� ����Ѵ�.
	printf("�Է� ���� ���ڿ�: %s \n", str); 

	printf("���� ���� ���: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}