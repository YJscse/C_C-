/*
�ϳ��� ���ܾ �Է¹޾Ƽ� ���̸� ����Ͽ� ����϶�. morning��� �Է��ϸ� 7�� ��µǾ��Ѵ�.
*/

#include <stdio.h>

int main11_030(void)
{
	char str[50];
	int i = 0;

	printf("���ܾ �Է��Ͻÿ�");
	scanf("%s", str);
	
	while (str[i] != '\0')
	{
		i++;
	}
	
	printf("���ڿ� ����: %d \n", i);

	return 0;

}