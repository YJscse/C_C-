#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("5���� ������ �Է��Ͻÿ� \n");

	for (int i = 1; i < 6; i++)
	{
		printf("%d ��° ����: ", i);
		scanf("%d", &num);
		
		if (num < 1)
		{
			printf("1�̻��� ������ �Է����ֽʽÿ�: ");
			i--;
			printf("\n");
		}

	}
	

}