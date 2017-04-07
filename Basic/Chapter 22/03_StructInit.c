#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main22_03(void)
{
	struct point pos = {10};   //초기화 방식은 배열과 유사하다
	struct person man = { "이승기", "010-1212-0001", 21 };

	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);

	return 0;
}