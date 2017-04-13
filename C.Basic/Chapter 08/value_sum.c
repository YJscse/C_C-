#include <stdio.h>

int main000(void)
/*{
	int s;
	s = 85;

	if (90 <= s <= 100) printf("A");
	if (80 <= s < 90) printf("B");
	if (70 <= s < 80) printf("C");                 기존코드
	if (60 <= s < 70) printf("D");
	if ( s < 60) printf("F");

	printf("\nstop");
}
*/
// if 문의 ()괄호안은 참이냐 거짓이냐를 판별 0,1

{
	int s;
	s = 85;

	if (s >= 90 && s <= 100) printf("A");
	if (s >= 80 && s < 90)   printf("B");     //정상코드
	if (s >= 70 && s < 80)   printf("C");
	if (s >= 60 && s <= 70)  printf("D");
	if (s < 60)              printf("F");

	printf("\nstop");
}