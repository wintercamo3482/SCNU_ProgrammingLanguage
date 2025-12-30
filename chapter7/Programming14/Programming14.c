#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	int i_input = 0;

	do
	{
		printf("몇번째 항까지 구할까요? ");
		scanf(" %d", &i_input);
	} while (i_input <= 1);

	for (int i = 0; i < i_input; i++)
	{
		printf("%d, ", c);
		
		c = a + b;
		a = b;
		b = c;
	}

	printf("\n");

	return 0;
}
