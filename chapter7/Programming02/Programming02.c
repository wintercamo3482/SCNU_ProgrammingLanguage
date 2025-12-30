#include <stdio.h>

int main(void)
{
	int num = 3;
	int sum = 0;

	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}

	printf("1부터 100 사이의 모든 %d의 배수의 합은 %d입니다.\n", num, sum);
}