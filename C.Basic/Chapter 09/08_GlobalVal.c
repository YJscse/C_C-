#include <stdio.h>

void Add09_08(int val);
int num;   // ���������� �⺻ 0���� �ʱ�ȭ��

int main09_08(void)
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;        //�������� num�� �� 1 ����
	printf("num: %d \n", num);
	return 0;
}

void Add09_08(int val)
{
	num = num + val;  // �������� num�� �� val��ŭ ����
}