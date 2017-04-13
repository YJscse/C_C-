#include <stdio.h>
#define SQUARE(X) X*X

int main26_02(void)
{
	int num = 20;

	/* 정상적 결과 출력 */
	printf("Square of num: %d \n", SQUARE(num));
	printf("Square of -5: %d \n", SQUARE(-5));
	printf("Square of 2.5: %g \n", SQUARE(2.5));

	/* 비정상적 결과 출력 */
	printf("Square of 3 + 2: %d \n", SQUARE(3 + 2));    //3 + 2 를 하고싶으면 (3 + 2) 이렇게 해라

	return 0;

}