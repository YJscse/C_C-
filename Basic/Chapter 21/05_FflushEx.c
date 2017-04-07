#include <stdio.h>

int main21_05(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", perID[i]);
	}
	printf("\n\n\n");
	//Enter 값이 아직 사용안되고 있는 상황

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;
}