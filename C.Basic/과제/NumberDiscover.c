/*
����ã��
1.���ڿ͹��ڸ� �������� �Է¹޴´�. > 123abc654ijuyh    
2.���߿� ���ڸ� ã�Ƴ���.
3.ã�Ƴ� ������ ���� ���ؼ� ����Ѵ�.
ASCII�ڵ�ǥ�� Ȱ���Ͽ� ������ �ذ��Ѵ�.
���࿹)
�������������Է� : ab12
�Է� ���� ���ڿ� ab12
a->����
b->����
1->����
2->����
������ �� : 3
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . .
*/

#include <stdio.h>

int main521651(void)
{
	char num[100];
	int i = 0;
	int total = 0;

	printf("������ ������ �Է�: ");
	scanf("%s", num);
	printf("�Է� ���� ���ڿ�: %s \n", num);
	
	for (i; i < 50; i++)
	{
		if (num[i] >= 48 && num[i] <= 57)
		{
			printf("%d -> ���� \n", (num[i]-48));
			total = total + (num[i] - 48);
		}
		
		else if(num[i] >= 65 && num[i] <= 122)
		{
			
			printf("%c -> ���� \n", num[i]);
		}

		else
		{
			break;
		}
		
	}
	printf("������ ��: %d \n", total);
	return 0;
}