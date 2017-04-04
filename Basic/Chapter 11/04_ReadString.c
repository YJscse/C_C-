#include <stdio.h>

int main11_04(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str);  //문자열을 입력 받아서 배열 str에 저장!
	// scanf 함수를 이용해서 문자열 입력 시 서식문자 %s 를 사용한다.
	printf("입력 받은 문자열: %s \n", str); 

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}