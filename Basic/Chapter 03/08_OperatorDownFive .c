#include <stdio.h>

int main8(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; // ++, -- 이것은 줄만 바뀌어도 적용됨 

	/* int num1 = 10;
	   int num2 = num1 + 2;            ←위에 수식과 같은 수식
	   num1 = num1 - 1
	*/
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	return 0;
}