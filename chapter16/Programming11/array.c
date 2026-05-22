#include "array.h"

#include <stdio.h>

int32_t get_sum_of_array(int32_t as32_array[], int32_t s32_size)
{
	int32_t s32_ret = 0;

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		s32_ret += as32_array[s32_i];
	}

	return s32_ret;
}

void print_array(int32_t as32_array[], int32_t s32_size)
{
	printf("[ ");

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		printf("%d ", as32_array[s32_i]);
	}

	printf("]\n");
}