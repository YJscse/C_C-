#include <stdio.h>
#define ADD 1
#define MIN 0

int main26_05(void)
{
	int num1, num2;
	
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

#if ADD   // ADD�� '��'�̶��

	printf("%d + %d = %d \n", num1, num2, num1 + num2);  

#endif   // ����ó�� �������� ADD�� '��'�̸� ~endif ���� ������ ��� ����

#if MIN   // MIN�� '��'�̶��

	printf("%d - %d = %d \n", num1, num2, num1 - num2);

#endif    //// ����ó�� �������� MIN�� '��'�̸� ~endif ���� ������ ��� ����
}