#include <stdio.h>

int main21_08(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**case 1 **/
	strcpy(str2, str1);
	puts(str2);

	/**case 2 **/
	strncpy(str3, str1, sizeof(str3));   //문자열을 복사할때는 항상 널 문자의 복사까지 
	puts(str3);                          //고려해야 한다.

	/** case 3 **/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}