#include <stdio.h>

int main16_05(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];

	printf("높이 2, 세로 3, 가로 4 int 형 배열: %d \n", sizeof(arr1));
	printf("높이 2, 세로 3, 가로 4 double 형 배열: %d \n", sizeof(arr2));

	return 0;
}