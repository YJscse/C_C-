#include <stdio.h>

int main3(void)
{
	double rad;
	double area;
	
	printf("���� ������ �Է�: ");
	scanf("%lf", &rad);    //double�� ������ �Է� ���Ĺ��� %lf  - scanf

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area); //double�� ������ ��� ���Ĺ��� %f  - printf
	
	return 0;
}