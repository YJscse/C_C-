#include <stdio.h>

int main8_05(void)
{
	int num, abs;

	printf("정수 입력: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);   //조건이 참이면 num 반환, 거짓이면 num * (-1)반환
	printf("절대값: %d \n", abs);

	return 0;
}

//  삼      항         연산자
// (조건 ? 데이터 a : 데이터 b) ← 조건이 참이면 데이터 a
//                               조건이 거짓이면 데이터 b