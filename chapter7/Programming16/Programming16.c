#include <stdio.h>

int main()
{
	int i_n = 0;

	do
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &i_n);
	} while (i_n < 0);

	do
	{
		int i = i_n % 10;
		i_n /= 10;

		printf("%d", i);

	} while (i_n != 0);

	printf("\n");

	return 0;
}