#include <stdio.h>

int main11(void)
{
	int num1 = 100;
	int num2 = 100;
	int * pnum;

	pnum = &num1;
	*pnum = *pnum + 30;

	pnum = &num2;
	*pnum = *pnum - 30;

	printf("num1: %d, num2: %d \n", num1, num2);
	
	double * pnum2 = &num1;
	printf("num1: %d \n", *pnum2);

	double num3 = 5;
	int * pnum3 = &num3;
	printf("num1: %d \n", *pnum3);

	printf("int형 포인터변수 크기: %d \n", sizeof(pnum3));
	printf("double형 포인터변수 크기: %d \n", sizeof(pnum2));

	return 0;
}

// *pnum = num ← 값, pnum = &num ← 주소
// pnum 을 초기화할때 아무값도 넣고싶지 않다면 NULL 로 초기화 시켜놔라
// ex) *pnum = NULL

// int * ptr = 0;
//float * ptr = NULL;
//int num = 0;
//int pnum = 0;

// int num1 = 10; 칼리스타가있고
// int * ptr1 = NULL; 우리편 서폿이있고
// ptr1 = &num1; 서폿이랑 계약을하고
// *ptr1 = num1; 칼리가 서폿을 던진다
