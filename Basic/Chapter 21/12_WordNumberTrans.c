#include "stdio.h"

int main()
{
	char sNum[] = "1234567";
	int nUserScore = 100;
	int nComScore = 200;

	//-----------------------------
	int nNum = atoi(sNum) + 1;
	printf("%d \n", nNum);

	//------------------------------
	char myNum[20] = { 0 };
	sprintf(myNum, "Your Score : %d", nUserScore);
	printf("%s \n", myNum);
	
	return 0;
}


//숫자를 문자로 문자를 숫자로 바꾸는 코드