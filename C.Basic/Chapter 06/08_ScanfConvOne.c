#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	
	printf("세 개의 정수 입력: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n", num1, num2, num3);

	return 0;
}
//입력의 형식 : 어떻게 받아들일 거니?     scanf 함수에게 전달해야할 두 가지 정보
//입력의 장소 : 어디에 저장할까?

// %d 10진수 정수의 형태로 데이터를 입력 받는다.
// %o 8진수 양의 정수의 형태로 데이터를 입력 받는다.
// %x 16진수 양의 정수의 형태로 데이터를 입력 받는다.