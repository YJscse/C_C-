#include <stdio.h>

int main15_03(void)
{
	char word1[50] = { 0 };
	char word2[50] = { 0 };
	int i = 0, j = 0;
	int count = 0;
	int num = 0;

	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", word1);


	for (i = 0; word1[i] != '\0'; i++)
	{
		count++;
	}
	
	num = count;

	for (i = 0; i < num; i++)
	{
		word2[i] = word1[count - 1];
		count--;
	}
	
	for (i = 0; i < num; i++)
	{
		if (word1[i] == word2[i])
		{
			j++;
		}
	}
	
	if (num == j)
	{
		printf("ȸ���Դϴ�. \n");
	}
	else if (num != j)
	{
		printf("ȸ���� �ƴմϴ�. \n");
	}
	
	return 0;
	
	
}