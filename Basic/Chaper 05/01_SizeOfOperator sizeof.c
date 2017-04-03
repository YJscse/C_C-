#include <stdio.h>

int main1(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dunm의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));

	return 0;
}

// sizeof 연산자의 피연산자로는 변수, 상수 및 자료형의 이름 등이 올 수 있다.
// 소괄호는 int와 같은 자료형의 이름에만 필수! 하지만 모든 피연산자를 대상으로
// 소괄호를 감싸주는것이 일반적!
// *여기서 자료형이란 char, short, int, long, float, double 등등