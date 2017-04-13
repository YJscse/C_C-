#include <stdio.h>

int main2(void)
{
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));
	printf("size of char add: %d \n", sizeof(num1 + num2));
	printf("size of short add: %d \n", sizeof(num3 + num4));

	result1 = num1 + num2; // 데이터를 더한 값의 크기를 요청한 것이기 때문에 1바이트
	result2 = num3 + num4; // 데이터를 더한 값의 크기를 요청한 것이기 때문에 2바이트
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));

	return 0;
}

// 연산결과의 크키가 4바이트인 이유는 연산을 하는순간 
// 컴퓨터가 int로 계산을 하기때문에 int 데이터로 형 변환을 한것이다.
