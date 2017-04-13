#include <stdio.h>
//#define ADD 1
#define MIN 0

int main26_06(void)
{
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD   // 매크로 ADD가 정의되었다면

	printf("%d + %d = %d \n", num1, num2, num1 + num2);

#endif   // ADD가 정의되었다면 ~endif까지 컴파일 대상에 포함

#ifdef MIN   // 매크로 MIN이 정의되었다면

	printf("%d - %d = %d \n", num1, num2, num1 - num2);

#endif    // MIN이 정의되었다면 ~endif까지 컴파일 대상에 포함
}