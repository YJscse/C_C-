#include <stdio.h>

int main21_02(void)
{
	int ch;         // char 인데 int로 반환하는 이유는 EOF는 -1로 정의되어있는데
	                // Char로 반환형을 선택하면 unsigend가 되어서 음수를 없애버리기때문에
	while (1)       // int 형으로 받는것이다.
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	return 0;
}
//콘솔 대상의 fgetc, getchar 함수호출로 EOF를 반환하는 경우
//- 함수호출의 실패
//- Windous에서 Ctrl+Z키, Linux에서 Ctrl+D키가 입력 되는 경우