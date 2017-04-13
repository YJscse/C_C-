#ifndef __STDIV2_H__
#define __STDIV2_H__

typedef struct div
{
	int quotient;
	int remainder;

}Div;

#endif

/*
헤더파일의 중복삽입 자체는 문제가 되지 않는다.
 - 선언은 두 번 이상 포함시켜도 문제되지 않는다.
 - 정의(구조체 및 함수의 정의)는 두 번 이상 포함시키면 문제가 된다.
*/