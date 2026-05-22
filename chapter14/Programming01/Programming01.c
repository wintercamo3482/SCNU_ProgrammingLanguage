#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void PrintArray(int32_t as32_array[], int32_t s32_size)
{

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		printf("%d, ", as32_array[s32_i]);
	}
}

int32_t CompareDescending(const void* p_a, const void* p_b)
{
	int32_t s32_ret = -1;
	int32_t s32_a = *(const int32_t*)p_a;
	int32_t s32_b = *(const int32_t*)p_b;

	do
	{
		if (s32_a < s32_b)
		{
			s32_ret = 1;
			break;
		}

		else if (s32_a == s32_b)
		{
			s32_ret = 0;
			break;
		}

		else
		{
			break;
		}
	} while (0);

	return s32_ret;
}

int main(void)
{
	int32_t as32_values[] = {30, 80, 100, 50, 60, 20, 40, 90, 70, 10};
	int32_t s32_arraySize = sizeof(as32_values) / sizeof(as32_values[0]);

	printf("정렬되지 않은 배열:\n");
	PrintArray(as32_values, s32_arraySize);
	
	printf("\n");

	qsort(as32_values, s32_arraySize, sizeof(int32_t), CompareDescending);

	printf("내림차순으로 정렬된 배열:\n");
	PrintArray(as32_values, s32_arraySize);

	printf("\n");

	return 0;
}