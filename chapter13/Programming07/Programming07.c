#include <stdio.h>
#include <stdint.h>

struct point
{
	int32_t s32_x;
	int32_t s32_y;
};

int32_t quadrant(struct point st_p)
{
	int32_t s32_ret = 0;

	if (st_p.s32_x > 0 && st_p.s32_y > 0)
	{
		s32_ret = 1;
	}

	else if (st_p.s32_x < 0 && st_p.s32_y > 0)
	{
		s32_ret = 2;
	}

	else if (st_p.s32_x < 0 && st_p.s32_y < 0)
	{
		s32_ret = 3;
	}
	
	else
	{
		s32_ret = 4;
	}

	return s32_ret;
}

int main(void)
{
	struct point st_point = { -1, 2 };
	
	printf("(%d, %d)의 사분면 = %d\n", st_point.s32_x, st_point.s32_y, quadrant(st_point));

	return 0;
}