#include <stdio.h>

int main1(void)
{
	int num = 0;

	while(num < 5)                                //중괄호 내부 반복영역
	{                                           //  
		printf("Hello world! %d \n", num);      //
		num++;                                  //
	}
	return 0;
}