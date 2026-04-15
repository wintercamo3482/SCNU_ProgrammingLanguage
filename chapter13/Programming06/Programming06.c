#include <stdio.h>
#include <stdint.h>

struct point
{
	int32_t s32_x;
	int32_t s32_y;
};

int32_t equal(struct point* pst_p1, struct point* pst_p2)
{
	int32_t s32_ret = 0;

	do
	{
		if ((pst_p1->s32_x == pst_p2->s32_x) && (pst_p1->s32_y == pst_p2->s32_y))
		{
			s32_ret = 1;
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
	struct point st_p1 = { 1, 2 };
	struct point st_p2 = { 3, 5 };

	if (equal(&st_p1, &st_p2))
	{
		printf("(%d, %d) == (%d, %d)\n", st_p1.s32_x, st_p1.s32_y, st_p2.s32_x, st_p2.s32_y);
	}
	else
	{
		printf("(%d, %d) != (%d, %d)\n", st_p1.s32_x, st_p1.s32_y, st_p2.s32_x, st_p2.s32_y);
	}

	return 0;
}