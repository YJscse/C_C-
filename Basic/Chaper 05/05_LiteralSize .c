#include <stdio.h>

int main5(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));

	return 0;
}

//정수는 기본적으로 int형으로 표현
//실수는 기본적으로 double형으로 표현
//문자!!!는 기본적으로 int형으로 표현 (그러므로 char size 이지만 문자로 
//표현되었기 때문에 int 즉 4바이트로 나온것임) 