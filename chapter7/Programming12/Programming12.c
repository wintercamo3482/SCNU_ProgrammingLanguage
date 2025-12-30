#include <stdio.h>

int main()
{
	int i_input = 0;

	do
	{
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &i_input);

		if (i_input < 0)
			break;

		if (i_input > 50)
			i_input = 50;

		for (int i = 0; i < i_input; i++)
			printf("*");

		printf("\n");

	} while (1);

	return 0;
}