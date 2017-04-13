#include <stdio.h>

int main13_01(void)
{
	int arr[3] = {0, 1, 2};

	printf("배열의 이름: %p \n", arr);       //배열이름의 주소와 첫 번째 요소의 주소가 같다.
	printf("첫 번째 요소: %p \n", &arr[0]);  // 각 주소마다 4씩 차이난다.
	printf("두 번재 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);
	//arr = &arr[i] 이 문장은 컴파일 에러를 일으킨다.

	return 0;
}
//%p 는 포인터주소를 알아내기위한 서식문자