#include <stdio.h>
#include <stdint.h>

#define SIZE 10

int32_t search(int32_t* p_A, int32_t s32_size, int32_t s32_searchValue)
{
	int32_t s32_i;

	for (s32_i = 0; s32_i < s32_size; s32_i++)
	{
		if (p_A[s32_i] == s32_searchValue)
		{
			return s32_i;
		}
	}
}

int main(void)
{
	int32_t as32_salary[SIZE] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500 };
	int32_t s32_size = sizeof(as32_salary) / sizeof(as32_salary[0]);
	int32_t s32_targetValue = 200;

	printf("월급 %d만원인 사람의 인덱스=%d\n", s32_targetValue, search(as32_salary, s32_size, s32_targetValue));

	return 0;
}