#include <stdio.h>

void Swap14_03(int n1, int n2)
{
	int temp = n1;  //n1 값이 temp 값으로 들어감
	n1 = n2;        //n2 값이 n1 값으로 들어감
	n2 = temp;      //temp 값이 n2 값으로 들어감

	printf("n1 n2: %d %d \n", n1, n2);
}

int main14_03(void)
{
	int num1 = 10;
	int num2 = 20;

	printf("num1 num2: %d %d \n", num1, num2);

	Swap14_03(num1, num2); 
	printf("num1 num2: %d %d \n", num1, num2);

	return 0;
}