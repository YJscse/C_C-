#include <stdio.h>

int main8_05(void)
{
	int num, abs;

	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);   //������ ���̸� num ��ȯ, �����̸� num * (-1)��ȯ
	printf("���밪: %d \n", abs);

	return 0;
}

//  ��      ��         ������
// (���� ? ������ a : ������ b) �� ������ ���̸� ������ a
//                               ������ �����̸� ������ b