#include <stdio.h>
//#define STNUM(Y, S, P) YSP
//#define STNUM(Y, S, P) Y S P
#define STNUM(Y, S, P)  ((Y) * 100000 + (S) * 1000 + (P))

int main(void)
{
	printf("학번: %d \n", STNUM(10, 65, 175));
	printf("학번: %d \n", STNUM(10, 65, 075)); // STNUM(10, 65 75) 라고 써야함

	return 0;
}

// 필요한 형태대로 단순 결합 : ## 연산자
// #define STNUM(Y, S, P)  Y ## S ## P