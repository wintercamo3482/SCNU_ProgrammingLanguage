#include <stdio.h>
#include <stdint.h>

#define PI 3.14

struct point
{
	int32_t s32_x;
	int32_t s32_y;
};

typedef struct circle
{
	struct point point;	// 원의 중심
	double d64_radius;		// 원의 반지름
}CIRCLE;

double Area(struct circle st_c)
{
	return st_c.d64_radius * st_c.d64_radius * PI;
}

double Perimeter(struct circle st_c)
{
	return st_c.d64_radius * 2 * PI;
}

int main(void)
{
	CIRCLE st_c = { 0, 0, 10 };
	
	printf("원의 중심점: (%d, %d)\n", st_c.point.s32_x, st_c.point.s32_y);
	printf("원의 반지름: %.lf\n", st_c.d64_radius);
	printf("원의 면적=%.2lf\n", Area(st_c));
	printf("원의 둘레=%.2lf\n", Perimeter(st_c));

	return 0;
}