#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition23_03(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);

	return cen;   // 구조체 변수 cen이 통째로 반환된다.
}

int main23_03(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition23_03(curPos);

	return 0;
}