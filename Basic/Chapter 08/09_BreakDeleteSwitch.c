#include <stdio.h>

int main8_09(void)
{
	char sel;

	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case 'M':   // case 'M': case 'm' �̷��� ���ٿ� ǥ���ϱ⵵ �Ѵ�.
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break; //��� ���ʿ��� break��
	}
	return 0;
}