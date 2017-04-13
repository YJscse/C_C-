#include <stdio.h>

extern void Increment(void);
extern int GetNum(void);

int main(void)
{
	printf("num: %d \n", GetNum());
	Increment();
}

//키워드 extern이 외부에 존재함을 알리는 용도로 사용된다.