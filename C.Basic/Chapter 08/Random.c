#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main0000()
{
	int num;

	printf("%d \n", (int)time(NULL));  // NULL (��) C���� �����Ͱ� �ƹ��͵� ����Ű�� ���� �ʴٴ� ���� ��Ÿ���� ���� ����ϴ°� , ���ڿ��� ���� ��Ÿ���� ����.

	srand((int)time(NULL)); //random �ʱ�ȭ�� ������ ����� �ѹ��� ���� �ȴ�.
	
	num = rand() % 10; // random�� (0~42�ﰳ�� ���ڰ� �����ȴ�.
	printf("������ ����: %d \n", num);

	return 0;
}