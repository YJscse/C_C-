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


//���ڸ� ���ڷ� ���ڸ� ���ڷ� �ٲٴ� �ڵ�