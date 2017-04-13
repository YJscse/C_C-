#include <stdio.h>

int main6(void)
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 : %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);

	return 0;
}

//정수를 실수로 형 변환 : 3 은 3.0으로 5는 5.0으로
//실수를 정수로 형 변환 : 소수점 이하의 값이 소멸된다.
//큰정수를 작은 정수로 형 변환 : 작은 정수의 크기에 맞춰서 상위 바이트가 소멸된다. 

