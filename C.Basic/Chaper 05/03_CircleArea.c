#include <stdio.h>

int main3(void)
{
	double rad;
	double area;
	
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);    //double형 변수의 입력 서식문자 %lf  - scanf

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area); //double형 변수의 출력 서식문자 %f  - printf
	
	return 0;
}