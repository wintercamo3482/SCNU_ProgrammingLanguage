#include <stdio.h>

int main()
{
	int i_is_prime = 0;

	for (int i = 2; i <= 100; i++)
	{
		i_is_prime = 1;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				i_is_prime = 0;
				break;
			}
		}
		
		if (i_is_prime)
			printf("%d ", i);
	}

	return 0;
}