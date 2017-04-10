#include <stdio.h>

int main24_01(void)
{
	FILE * fp = fopen("data.txt", "wt");  //파일 data.txt와 스트림을 형성하되
	if (fp == NULL)                       // wt 모드로 스트림을 형성해라
	{
		puts("파일오픈 실패!");
		return -1;   //비정상적 종료를 의미하기 위해서 -1을 반환
	}

	fputc('A', fp);   // ← 문자 A를 fp가 가리키는 파일에 저장해라!
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);    //스트림의 종료
	
	return 0;
}

// FILE * fp = fopen("C://Project//data.txt", "wt");    "wt" 에는 출력 스트림의 의미가 담겨있다.
// fopen 함수호출 시 경로를 완전히 명시할 수도 있다.