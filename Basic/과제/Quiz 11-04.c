/*
����4

���ܾ char�� �迭�� �����Ѵ�.�� ���� ���ܾ �������� �����´�.
�׸��� �Է��ߴ� �ܾ�� �������� �ܾ ����Ѵ�.
*/

int main11_040(void)
{
	char str[50];
	int idx = 0;

	printf("���ܾ �Է��Ͻÿ�");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	for (int i = 0; idx > i; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for (int i = idx - 1; i > -1; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");



	return 0;

}