#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0; //초기화하지 않으면 0 초기화
	int num2 = 0;        //초기화하지 않으면 쓰레기 값 초기화
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main09_10(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}

//static이 붙으면 나만아는 변수 다른사람이 이 변수를 사용할수 없음
//전역변수를 최소화하기위해 static 지역변수를 사용함