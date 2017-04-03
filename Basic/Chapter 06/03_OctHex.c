#include <stdio.h>

int main3(void)
{
	int num1 = 7, num2 = 13;

	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);

	return 0;
}
// #을 삽입하면 8진수 앞에 0 16진수 앞에 0x가 삽입된다.
/* 
      서식문자         출력대상         출력형태
	     %d        char, short, int     부호 있는 10진수 정수
         %f          float, double      10진수 방식의 부동소수점 실수
		 %c        char, short, int     값에 대응하는 '문자'

*/