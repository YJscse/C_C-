#include <stdio.h>

int main13_03(void)
{
	int arr[3] = { 15, 25, 35 };
	int * ptr = &arr[0];   // int * ptr = arr 과 동일한 문장

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr); // 역시나 배열이름과 배열의 첫 번째 요소가 같은값임

	return 0;
}