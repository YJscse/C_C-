#include <stdio.h>

int main000(void)
/*{
	int s;
	s = 85;

	if (90 <= s <= 100) printf("A");
	if (80 <= s < 90) printf("B");
	if (70 <= s < 80) printf("C");                 �����ڵ�
	if (60 <= s < 70) printf("D");
	if ( s < 60) printf("F");

	printf("\nstop");
}
*/
// if ���� ()��ȣ���� ���̳� �����̳ĸ� �Ǻ� 0,1

{
	int s;
	s = 85;

	if (s >= 90 && s <= 100) printf("A");
	if (s >= 80 && s < 90)   printf("B");     //�����ڵ�
	if (s >= 70 && s < 80)   printf("C");
	if (s >= 60 && s <= 70)  printf("D");
	if (s < 60)              printf("F");

	printf("\nstop");
}