#include <stdio.h>

int main13_06(void)
{
	char str1[] = "My String";    //변수 형태의 문자열
	char * str2 = "Your String";  //상수 형태의 문자열
	printf("%s %s \n", str1, str2);

	str2 = "Our String";   //가리키는 대상 변경
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';    // 문자열 변경 성공  
//	str2[0] = 'X';    // 문자열 변경 실패  
	printf("%s %s \n", str1, str2);

	return 0;
}


//변수 형태는 문자 하나하나를 찍어내는거라서 문자열 변경가능하고
//상수 형태는 한번에 주르륵 찍어내기때문에 중간의 문자열 변경 불가능