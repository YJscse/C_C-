#include <stdio.h>

int main7(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	
	divResult = num1 / num2;  
	printf("������ ���: %f \n", divResult);
	return 0;
}
// num1�� num2�� �����̱� ������ �� ��ȯ�� �Ǵ� ������ �������� �����
// divResult = (double)num1 / num2;   (type)�� type�������� �� ��ȯ�� �ǹ�
// num1�� double������ ����� �� ��ȯ �׸��� num1�� num2�� / ���� ���������� ����� �ڵ� ����ȯ
// �װ�� �Ǽ��� �������� ����Ǿ� divResult���� 0.75�� ����ȴ�.