#include <stdio.h>

int main12_02(void)
{
	int num1 = 10;
	int num2 = 20;
	int * ptr1 = NULL;
	int * ptr2 = NULL;

	ptr1 = &num1;
	ptr2 = &num2;

	*ptr1 = *ptr1 + 10;
	*ptr2 = *ptr2 - 10;

	printf("%d \n", *ptr1);
	printf("%d \n", *ptr2);

	ptr1 = &num2;
	ptr2 = &num1;

	*ptr1 = *ptr1 + 15;
	*ptr2 = *ptr2 + 15;

	printf("%d \n", *ptr1);
	printf("%d \n", *ptr2);

	return 0;
}