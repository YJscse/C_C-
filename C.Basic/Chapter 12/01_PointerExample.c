#include <stdio.h>

int main11(void)
{
	int num1 = 100;
	int num2 = 100;
	int * pnum;

	pnum = &num1;
	*pnum = *pnum + 30;

	pnum = &num2;
	*pnum = *pnum - 30;

	printf("num1: %d, num2: %d \n", num1, num2);
	
	double * pnum2 = &num1;
	printf("num1: %d \n", *pnum2);

	double num3 = 5;
	int * pnum3 = &num3;
	printf("num1: %d \n", *pnum3);

	printf("int�� �����ͺ��� ũ��: %d \n", sizeof(pnum3));
	printf("double�� �����ͺ��� ũ��: %d \n", sizeof(pnum2));

	return 0;
}

// *pnum = num �� ��, pnum = &num �� �ּ�
// pnum �� �ʱ�ȭ�Ҷ� �ƹ����� �ְ���� �ʴٸ� NULL �� �ʱ�ȭ ���ѳ���
// ex) *pnum = NULL

// int * ptr = 0;
//float * ptr = NULL;
//int num = 0;
//int pnum = 0;

// int num1 = 10; Į����Ÿ���ְ�
// int * ptr1 = NULL; �츮�� �������ְ�
// ptr1 = &num1; �����̶� ������ϰ�
// *ptr1 = num1; Į���� ������ ������
