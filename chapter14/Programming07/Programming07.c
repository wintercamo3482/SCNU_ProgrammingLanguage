#include <stdio.h>
#include <stdint.h>

void set_max_ptr(int32_t as32_m[], int32_t s32_size, int32_t** ps32_pmax)
{
	*ps32_pmax = &as32_m[0];
	
	for (int32_t s32_i = 1; s32_i < s32_size; s32_i++)
	{
		if (as32_m[s32_i] >= **ps32_pmax)
		{
			*ps32_pmax = &as32_m[s32_i];
		}
	}

	printf("가장 큰 값은 %d\n", **ps32_pmax);
}

int main(void)
{
	int32_t as32_m[6] = { 5, 6, 1, 3, 7, 9 };
	int32_t* ps32_pmax = NULL;
	int32_t s32_size = sizeof(as32_m) / sizeof(as32_m[0]);

	set_max_ptr(as32_m, s32_size, &ps32_pmax);

	return 0;
}