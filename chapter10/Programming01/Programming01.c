#include <stdio.h>

int main(void)
{
	int ai_days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i_idx = 0; i_idx < 12; i_idx++)
		printf("%d월은 %d일까지 있습니다.\n", i_idx + 1, ai_days[i_idx]);

	return 0;
}