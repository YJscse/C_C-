#include <stdio.h>

int main8_4(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼Á 4.³ª´°¼À \n");
	printf("¹«¾ùÀ» ¼±ÅÃ? ");
	scanf("%d", &opt);
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	else if (opt == 2)
	{
		result = num1 - num2;
	}
	else if (opt == 3)
	{
		result = num1 * num2;
	}
	else if (opt == 4)
	{
		result = num1 / num2;
	}
	else
		printf("Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù.");
	printf("°á°ú: %f \n", result);

	return 0;
}