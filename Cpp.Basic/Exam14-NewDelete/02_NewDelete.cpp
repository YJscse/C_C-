#include <iostream>
#include <string.h>

using namespace std;

char * MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char) * len);
	char * str = new char[len];    // 키워드 new 오른편에, 할당할 대상의 정보를 직접 명시

	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);

	strcpy(str, "I am so happy ~");

	cout << str << endl;

	//free(str);
	delete []str;   // 배열의 형태로 할당된 메모리 공간의 해제

	return 0;
}