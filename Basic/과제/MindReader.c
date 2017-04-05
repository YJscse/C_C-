#include <stdio.h>
                          // y = 121,  h = 104, l = 108
int maindfdfdfdf(void)
{
	char user1, user2;
	int num = 0, com;
	int min = 1, max = 100;

	printf("지금부터 1에서 100까지 속으로 생각하세요. \n");     // 게임설명
	printf("생각해둔 숫자가 제가 추측한 수보다 크면 h \n");
	printf("그보다 작으면 l \n맞췄으면 y라고 입력해주세요.\n\n");

	while (1)
	{
		com = (min + max) / 2;               
		printf("%d 입니까? \n", com);           

		while (1)
		{                       // 엔터 처리
			scanf("%c", &user1);
			if (user1 != 10)
			{
				scanf("%c", &user2);
			}
			if(user1 == 10 || user2 == 10)
			{
				break;  // 같은 탈출문이 나오면 계속 탈출해라
			}
			num++;            
		}

		if (num == 0)     //사용자가 제대로 입력했을경우
		{
			if (user1 == 'h')               // 숫자가 너무 낮을때
			{
				max = com;           
				continue;             
			}
			else if (user1 == 'l')                //숫자가 너무 높을때
			{
				min = com;
				continue;
			}
			else if (user1 == 'y')
			{
				printf("제가 맞췄네요 하하.");   //정답일때
				break;
			}
			else
			{
				printf("다시 입력해주세요");   // 사용자가 제대로 입력 안했을경우
				continue;
			}
		}
		else if (num != 0)
		{
			printf("다시 입력해주세요");               
			continue;
		}
		else if (user1 == 'y')
		{
			printf("제가 맞췄네요 하하.");
			break;
		}


	}

	return 0;
}
