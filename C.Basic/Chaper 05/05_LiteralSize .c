#include <stdio.h>

int main5(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));

	return 0;
}

//������ �⺻������ int������ ǥ��
//�Ǽ��� �⺻������ double������ ǥ��
//����!!!�� �⺻������ int������ ǥ�� (�׷��Ƿ� char size ������ ���ڷ� 
//ǥ���Ǿ��� ������ int �� 4����Ʈ�� ���°���) 