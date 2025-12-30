#include <stdio.h>

int factorial(int n)
{
	int i, result = 1;

	for (i = 1; i <= n; i++)
		result *= i;                            // result = result * i
	return result;
}

int main(void)
{
	int i_input = 0;
	double d_result = 0.0;

	printf("어디까지 계산할까요: ");
	scanf("%d", &i_input);

	for (int i_idx = 0; i_idx < i_input; i_idx++)
	{
		d_result += 1.0 / factorial(i_idx);
	}

	printf("오일러의 수는 %lf입니다.\n", d_result);

	return 0;
}