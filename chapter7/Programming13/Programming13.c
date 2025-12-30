#include <stdio.h>

int main()
{
	int sum = 0;
	int n = 1;
	
	do
	{
		sum += n;
		n++;

	} while (sum + n <= 10000);

	printf("1부터 %d까지의 합이 %d입니다.\n", --n, sum);

	return 0;
}