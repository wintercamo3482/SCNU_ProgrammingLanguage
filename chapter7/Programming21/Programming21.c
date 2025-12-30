#include <stdio.h>

int main()
{
	int i_low = 0;
	int i_high = 100;
	int i_guess = 0;
	int i_hint = 0;

	printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n");
	printf("하나의 숫자를 생각하세요.");
	printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요.\n");
	printf("컴퓨터가 숫자를 맞히면 0라고 하세요.\n\n");

	do
	{
		i_guess = (i_high + i_low) / 2;
		printf("%d %d %d\n", i_guess, i_high, i_low);

		printf("숫자가 %d 인가요? ", i_guess);
		scanf("%d", &i_hint);

		switch (i_hint)
		{
		case 0:
			return;
		case -1:
			i_high= i_guess;
			break;
		case 1:
			i_low = i_guess;
			break;
		default:
			printf("[WARN] 올바른 입력값을 입력하시오\n");
			break;
		}

	} while (1);

	return 0;
}