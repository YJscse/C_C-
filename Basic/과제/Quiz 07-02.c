#include <stdio.h>

int main07_02(void)
{
	int num, is;
	double i = 0.0, total = 0.0;

	printf("��� ������ �Է�?(minus to quit): ");
	scanf("%d", &num);

	for (is = 0; is < num; is++)
	{
		printf("���� �Է�: ");
		scanf("%lf", &i);                // %lf �Է�
		total = total + i;               // %f ���
	}

	printf("���: %f \n", total / num);

	return 0;
}