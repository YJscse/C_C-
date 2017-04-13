#include <stdio.h>

int main08_08(void)
{
	int num1 = 0;
	int num2 = 0;

	
	for (num1 = 1; num1 < 10; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num1 + num2 == 9)
			{
				printf("%d, %d", num1, num2);
			}
		}printf("\n");
	}
}