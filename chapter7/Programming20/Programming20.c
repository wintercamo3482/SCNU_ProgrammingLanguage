#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i_current_stick = 12;
	int i_user_choice = 0;
	int i_computer_choice = 0;

	srand(time(NULL));

	do
	{
		printf("현재 스틱의 개수: %d\n", i_current_stick);

		do
		{
			printf("몇개의 스틱을 가져가시겠습니까? : ");
			scanf("%d", &i_user_choice);

		} while ((i_user_choice < 0) || (i_user_choice > 3));

		i_current_stick -= i_user_choice;

		if (i_current_stick <= 0)
		{
			printf("컴퓨터 승리\n");
			break;
		}



		i_computer_choice = rand() % 4;
		printf("컴퓨터는%d개의 스틱을 가져갔습니다.\n", i_computer_choice);

		i_current_stick -= i_computer_choice;

		if (i_current_stick <= 0)
		{
			printf("컴퓨터 패배\n");
			break;
		}

		printf("\n");

	} while (1);

	return 0;
}