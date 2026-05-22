#include "array.h"

int main(void)
{
	int32_t as32_sample[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int32_t s32_sampleSize = sizeof(as32_sample) / sizeof(as32_sample[0]);

	print_array(as32_sample, s32_sampleSize);

	printf("배열 요소의 합=%d\n", get_sum_of_array(as32_sample, s32_sampleSize));

	return 0;
}