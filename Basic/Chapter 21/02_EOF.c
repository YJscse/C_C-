#include <stdio.h>

int main21_02(void)
{
	int ch;         // char �ε� int�� ��ȯ�ϴ� ������ EOF�� -1�� ���ǵǾ��ִµ�
	                // Char�� ��ȯ���� �����ϸ� unsigend�� �Ǿ ������ ���ֹ����⶧����
	while (1)       // int ������ �޴°��̴�.
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
//�ܼ� ����� fgetc, getchar �Լ�ȣ��� EOF�� ��ȯ�ϴ� ���
//- �Լ�ȣ���� ����
//- Windous���� Ctrl+ZŰ, Linux���� Ctrl+DŰ�� �Է� �Ǵ� ���