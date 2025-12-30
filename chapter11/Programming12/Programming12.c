#include <stdio.h>
#include <stdint.h>

#define SIZE 10

int32_t array_sum(int32_t* p_A, int32_t s32_size)
{
	int32_t s32_i;
	int32_t s32_sum = 0;

	for (s32_i = 0; s32_i < s32_size; s32_i++)
	{
		s32_sum += p_A[s32_i];
	}

	return s32_sum;
}

void PrintArray(int32_t* p_array, int32_t s32_size)
{
    for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
    {
        printf("%d ", p_array[s32_i]);
    }
}

int main(void)
{
	int32_t as32_salary[SIZE] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int32_t s32_size = sizeof(as32_salary) / sizeof(as32_salary[0]);

	printf("A[] = ");
	PrintArray(as32_salary, s32_size);
	printf("\n");

	printf("월급의 합=%d\n", array_sum(as32_salary, s32_size));
	
	return 0;
}
