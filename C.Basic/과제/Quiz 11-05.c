/*
10�� ������ ���ܾ �Է¹޾� �ƽ�Ű �ڵ尪�� ���� ū ���ڸ� ����϶�.
LOVE�� �Է��ߴٸ� V�� ��µǾ�� �Ѵ�.
*/

#include <stdio.h>

int Maxvv(char str[], int idx)
{
	int max;
	max = (int)str[0];

	for (int i = 0; i < idx; i++)
	{
		if (max < (int)str[i])
		{
			max = (int)str[i];
		}
		
	}
	return max;
}

int mainvv(void)
{
	int idx = 0;
	char str[] = "";
	int max;

	printf("���ܾ �Է�(10�� ����): ");
	scanf("%s", str);

	while (str[idx] != '\0')  
	{
		idx++;
	}

	max = Maxvv(str, idx);

	printf("����ū ����: %c \n", max);
	
	return 0;

}