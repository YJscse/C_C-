#include <stdio.h>
#define ADD 1
#define MIN 0

int main26_05(void)
{
	int num1, num2;
	
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#if ADD   // ADD가 '참'이라면

	printf("%d + %d = %d \n", num1, num2, num1 + num2);  

#endif   // 선행처리 과정에서 ADD가 '참'이면 ~endif 까지 컬파일 대상에 포함

#if MIN   // MIN이 '참'이라면

	printf("%d - %d = %d \n", num1, num2, num1 - num2);

#endif    //// 선행처리 과정에서 MIN이 '참'이면 ~endif 까지 컬파일 대상에 포함
}