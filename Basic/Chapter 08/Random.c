#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main0000()
{
	int num;

	printf("%d \n", (int)time(NULL));  // NULL (널) C언어에서 포인터가 아무것도 가리키고 있지 않다는 것을 나타내기 위해 사용하는값 , 문자열의 끝을 나타내는 문자.

	srand((int)time(NULL)); //random 초기화는 변수가 몇개여도 한번만 쓰면 된다.
	
	num = rand() % 10; // random값 (0~42억개의 숫자가 지정된다.
	printf("생성된 숫자: %d \n", num);

	return 0;
}