/*
�ΰ��� ������ �Է� �޾Ƽ� �μ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.

�� �Էµ� �� ���� ������ ������� ��°���� �׻� 0 �̻��̾�� �Ѵ�.

1��2�� �Է��ߴٸ� 1 .... 20��10�� �Է��ߴٸ� 10 ....int

�� ���α׷��� if�� �Ǵ� ���ǿ����ڸ� �̿��Ͽ� �ۼ��غ���.

*/

#include <stdio.h>

int main08_02(void)
{
	int num1, num2;

	printf("�� ���� ������ �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		num1 = num2;
		printf("%d - %d = %d \n", num1, num2, num1 - num2);
	}
	else
	{
		num2 = num1;
		printf("%d - %d = %d \n",num2, num1, num1 - num2);
	}
}