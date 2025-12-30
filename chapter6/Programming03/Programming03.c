#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, computer;

	srand(time(NULL));
	computer = rand() % 3 + 1;

	printf("(1: 가위  2: 바위  3: 보) 중에서 하나를 선택하시오: ");
	scanf("%d", &user);

	printf("컴퓨터의 선택: ");
	switch (computer)
	{
	case 1:
		printf("가위\n\n");
		break;
	case 2:
		printf("바위\n\n");
		break;
	case 3:
		printf("보\n\n");
		break;
	}

	if (user == computer)
	{
		printf("비겼음\n");
	}
	else if ((user == 1 && computer == 3) ||
			 (user == 2 && computer == 1) ||
			 (user == 3 && computer == 2))
	{
		printf("사용자가 이겼음\n");
	}
	else
	{
		printf("컴퓨터가 이겼음\n");
	}

	return 0;
}
