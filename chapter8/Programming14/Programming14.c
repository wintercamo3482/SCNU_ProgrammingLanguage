#include <stdio.h>

int is_prime(int n)
{
	if (n < 2)
		return 0;

	int i;

	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int i_input;

	printf("양의 정수를 입력하시오: ");
	scanf("%d", &i_input);

	for (int i_idx = 2; i_idx <= i_input; i_idx++)
	{
		if (is_prime(i_idx) && is_prime(i_input - i_idx))
		{
			printf("%d = %d + %d\n", i_input, i_idx, i_input - i_idx);
		}
	}
	return 0;
}