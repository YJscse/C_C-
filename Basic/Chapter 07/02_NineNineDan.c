#include <stdio.h>

int main2(void)
{
	int dan = 0, num1 = 1;
	
	printf("�� ��? : ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf(" %d x %d = %d \n", dan, num1, dan * num1);
		num1++;
	}
	
	return 0;
}
//�������� �ݺ����� �����ϴµ� ���Ǵ� ��ǥ���� ��