#include <stdio.h>

typedef int INT;
typedef int * PTR_INT;

typedef	unsigned int UNIT;
typedef unsigned int * PTR_UNIT;

typedef unsigned char UCHAR;
typedef unsigned char * PTR_UCHAR;

int main23_01(void)
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'Z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);

	return 0;
}