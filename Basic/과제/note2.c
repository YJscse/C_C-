#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int temp;

	printf("%d %d \n", *ptr1 + 10, *ptr2 - 10);
	
	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("%d %d \n", *ptr1 + 15, *ptr2 + 15);

	return 0;
}