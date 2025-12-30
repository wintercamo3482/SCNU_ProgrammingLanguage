#include <stdio.h>

int main()
{
	int i_n = 0;
	int i_r = 0;
	int i_result = 1;

	do
	{
		printf("n의 값:  ");
		scanf("%d", &i_n);

		printf("r의 값:  ");
		scanf("%d", &i_r);

	} while ((i_n < 1) && (i_r < 1));

	for (int i = i_n; i > (i_n - i_r); --i)
	{
		i_result *= i;
	}

	printf("순열의 값은 %d입니다.\n", i_result);
	return 0;
}