#include <stdio.h>
#include <stdint.h>

void get_sum_diff(int32_t s32_x, int32_t s32_y, int32_t *p_sum, int32_t *p_diff)
{
	*p_sum = s32_x + s32_y;
	*p_diff = s32_x - s32_y;

	printf("원소들의 합 = %d\n", *p_sum);
	printf("원소들의 차 = %d\n", *p_diff);
}

int main(void)
{
	int32_t s32_x = 100;
	int32_t s32_y = 200;

	int32_t* p_sum = NULL;
	int32_t* p_diff = NULL;

	get_sum_diff(s32_x, s32_y, &p_sum, &p_diff);

	return 0;
}