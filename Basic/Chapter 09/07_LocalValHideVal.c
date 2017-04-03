#include <stdio.h>

int main09_07(void)
{
	int num = 1;

	if(num == 1)
	{
		int num = 7; // 이 행을 주석처리 하고 실행결과 확인하자!
		num = num + 10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;
}

//for문의 중괄호 내에 선언된 변수도 지역변수이다.
//그리고 이 지역변수는 for 문의 중괄호를 빠져나가면 소멸된다.
//따라서 for문의 반복횟수만큼 지역변수가 할당되고 소멸된다.