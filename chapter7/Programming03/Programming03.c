#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;
	int cnt = 0;

	do
	{
		printf("숫자를 입력하시오: ");
		scanf("%d", &num);

		if (num >= 0)
		{
			cnt++;
			sum += num;
		}

	} while (cnt < 3);

	printf("\n합게는 %d입니다.\n", sum);

	return 0;
}