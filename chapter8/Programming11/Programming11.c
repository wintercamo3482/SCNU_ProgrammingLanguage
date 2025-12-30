#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{
	return 1 + rand() % 6;
}

int main(void)
{
	srand(time(NULL));

	int i_user1 = randint();
	int i_user2 = randint();
	int i_user3 = randint();
	int i_user_sum = i_user1 + i_user2 + i_user3;

	int i_computer1 = randint();
	int i_computer2 = randint();
	int i_computer3 = randint();
	int i_computer_sum = i_computer1 + i_computer2 + i_computer3;

	printf("사용자 주사위=(%d, %d, %d)=%d\n", i_user1, i_user2, i_user3, i_user_sum);
	printf("컴퓨터 주사위=(%d, %d, %d)=%d\n", i_computer1, i_computer2, i_computer3, i_computer_sum);

	if (i_user_sum > i_computer_sum)
		printf("사용자 승리\n");
	else
		printf("컴퓨터 승리\n");

	return 0;
}