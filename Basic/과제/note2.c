/*
����4
���ܾ char�� �迭�� �����Ѵ�. �� ���� ���ܾ �������� �����´�.
�׸��� �Է��ߴ� �ܾ�� �������� �ܾ ����Ѵ�.
*/

#include <stdio.h>

int main(void)
{
	char word[20] = { 0 };
	int i = 0;

	printf("���ܾ �Է��Ͻÿ�: ");
	scanf("%s", word);

	for (i = 0; i != '\0'; i++)
	{
		printf("%s", word);
	}

	for (i; i != 0; i--)
	{
		printf("%c", word[i]);
	}

	return 0;
}
