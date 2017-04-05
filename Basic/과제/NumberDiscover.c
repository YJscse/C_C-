/*
숫자찾기
1.숫자와문자를 무작위로 입력받는다. > 123abc654ijuyh    
2.이중에 숫자만 찾아낸다.
3.찾아낸 숫자의 합을 구해서 출력한다.
ASCII코드표를 활용하여 문제를 해결한다.
실행예)
정수형데이터입력 : ab12
입력 받은 문자열 ab12
a->문자
b->문자
1->숫자
2->숫자
숫자의 합 : 3
계속하려면 아무 키나 누르십시오 . .
*/

#include <stdio.h>

int main521651(void)
{
	char num[100];
	int i = 0;
	int total = 0;

	printf("정수형 데이터 입력: ");
	scanf("%s", num);
	printf("입력 받은 문자열: %s \n", num);
	
	for (i; i < 50; i++)
	{
		if (num[i] >= 48 && num[i] <= 57)
		{
			printf("%d -> 숫자 \n", (num[i]-48));
			total = total + (num[i] - 48);
		}
		
		else if(num[i] >= 65 && num[i] <= 122)
		{
			
			printf("%c -> 문자 \n", num[i]);
		}

		else
		{
			break;
		}
		
	}
	printf("숫자의 합: %d \n", total);
	return 0;
}