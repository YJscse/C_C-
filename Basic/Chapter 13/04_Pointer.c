#include <stdio.h>

int main13_04(void)
{
	int *ptr1 = 0;
	double *ptr2 = 0;
	int num1, num2;

	

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p %p \n", ptr1, ptr2);
	
	ptr1++;
	ptr2++;

	printf("%p %p \n", ptr1, ptr2);

	return 0;
}