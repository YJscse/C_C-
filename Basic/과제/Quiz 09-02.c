#include <stdio.h>

double Celsius(double C)
{
	C = 1.8 * C + 32;

	return C;
}

double Fahrenheit(double F)
{
	F = (F - 32) / 1.8;

	return F;
}

int main161561(void)
{
	double C = 0.0;
	double F = 0.0;

	printf("���� �� ȭ�� ȭ�� �� ������ ��ȯ \n���� ȭ�� �Է�: ");
	scanf("%lf %lf", &C, &F);
	printf("��ȯ�� ��: %f F�� %f C�� \n", Celsius(C), Fahrenheit(F));
}

