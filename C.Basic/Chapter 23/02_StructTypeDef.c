#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;    //구조체 point의 정의와 typedef 선언

typedef struct person
{
	char name[20];
	char phoneNum[20];                 //구조체 person의 정의와 Person이라는 이름의 
	int age;                           //typedef 선언을 하나로!

}Person;

int main23_02(void)
{
	Point pos = { 10, 20 };
	Person man = { "이승기", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);

	return 0;
}