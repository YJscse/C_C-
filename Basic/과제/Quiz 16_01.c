#include <stdio.h>

int main16_01(void)
{
	int num[3][9] = {0};
	int dan = 0, fig = 0;
	

	for (dan = 0; dan < 3; dan++)
	{
		for (fig = 0; fig < 9; fig++)
		{
			num[dan][fig]= (dan + 2) * (fig + 1);
		}
	}
		for (dan = 0; dan < 3; dan++)
		{
			for (fig = 0; fig < 9; fig++)
			{
				printf("%-3d", num[dan][fig]);
			}
			printf("\n");
		}
	
	return 0;
	
}