#include <stdio.h>

extern void Increment(void);
extern int GetNum(void);

int main(void)
{
	printf("num: %d \n", GetNum());
	Increment();
}

//Ű���� extern�� �ܺο� �������� �˸��� �뵵�� ���ȴ�.