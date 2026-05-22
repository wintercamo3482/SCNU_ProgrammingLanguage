#include <stdio.h>
#include <stdint.h>

#define WIDTH	3
#define HEIGHT	3

void array_copy(int32_t as32_src[][WIDTH], int32_t as32_dst[][WIDTH])
{
	int32_t* ps32_src = &as32_src[0][0];
	int32_t* ps32_dst = &as32_dst[0][0];

	for (int32_t s32_i = 0; s32_i < WIDTH * HEIGHT; s32_i++)
	{
		*ps32_dst++ = *ps32_src++;
	}
}

void PrintArray(int32_t as32_array[][WIDTH])
{
	for (int32_t s32_i = 0; s32_i < HEIGHT; s32_i++)
	{
		for (int32_t s32_j = 0; s32_j < WIDTH; s32_j++)
		{
			printf("%d ", as32_array[s32_i][s32_j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int32_t as32_src[HEIGHT][WIDTH] =
	{
		{ 100, 30, 67 },
		{ 89, 50, 12 },
		{ 19, 60, 90 }
	};

	int32_t as32_dst[HEIGHT][WIDTH] = { 0 }; 

	printf("<원본 2차원 배열>\n");
	PrintArray(as32_src);

	printf("<복사본 2차원 배열>\n");

	array_copy(as32_src, as32_dst);
	PrintArray(as32_dst);

	return 0;
}