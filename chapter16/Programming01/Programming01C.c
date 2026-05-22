#include <stdio.h>
#include <stdint.h>

double power(int32_t s32_x, int32_t s32_y)
{
	double d64_result = 1.0;
	int32_t s32_i;

	for (s32_i = 0; s32_i < s32_y; s32_i++)
	{
		printf("%d : result = %f\n", __LINE__, d64_result);	// ①
		d64_result *= s32_x;
	}

	return d64_result;
}
int main(void)
{
	double d64_ret = power(2, 5);
	return 0;
}