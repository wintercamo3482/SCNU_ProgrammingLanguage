#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double sin_degree(double degree)
{
	return PI * degree / 180.0;
}

int main(void)
{
	for (double d_idx = 0.0; d_idx <= 180.0; d_idx += 10.0)
		printf("sin(%lf)ÀÇ °ªÀº %lf\n", d_idx, sin_degree(d_idx));

	return 0;
}