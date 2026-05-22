#include <stdio.h>
#include <stdint.h>

#define MAX_ROW		3
#define MAX_COL		10

int32_t get_sum(int32_t as32_array[], int32_t s32_size)
{
	int32_t s32_ret = 0;

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		s32_ret += as32_array[s32_i];
	}

	return s32_ret;
}

int main(void)
{
	int32_t as32_m[MAX_ROW][MAX_COL] =
	{
		{ 10, 10, 10, 10, 10, 10 },
		{ 10, 10, 10, 10, 10, 10 },
		{ 10, 10, 10, 10, 10, 10 }
	};

	int32_t s32_sum = 0;

	for (int32_t s32_i = 0; s32_i < MAX_ROW; s32_i++)
	{
		s32_sum += get_sum(as32_m[s32_i], MAX_COL);
	}

	printf("정수의 합 = %d", s32_sum);

	return 0;
}