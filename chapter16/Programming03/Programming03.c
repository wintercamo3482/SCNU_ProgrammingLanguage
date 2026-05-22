#include <stdio.h>
#include <stdint.h>

#define ARR_SIZE	10
#define ARRAY_INIT(array, size, value)				\
		{											\
			int32_t s32_i;							\
			for (s32_i = 0; s32_i < size; s32_i++)	\
				(array)[s32_i] = (value);			\
		}											\

int main(void)
{
	int32_t as32_array[ARR_SIZE];
	
	ARRAY_INIT(as32_array, ARR_SIZE, 0);
	
	printf("[ ");

	for (int32_t s32_i = 0; s32_i < ARR_SIZE; s32_i++)
	{
		printf("%d ", as32_array[s32_i]);
	}
	
	printf("]\n");

	return 0;
}
