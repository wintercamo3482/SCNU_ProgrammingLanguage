#include <stdio.h>

#define PI				3.141592
#define VOLUME(r,h)		((PI) * (r) * (r) * (h))

int main(void)
{
	double d64_radius = 0.0;
	double d64_height = 0.0;

	printf("원기둥의 반지름을 입력하시오: ");
	scanf(" %lf", &d64_radius);

	printf("원기둥의 높이을 입력하시오: ");
	scanf(" %lf", &d64_height);

	printf("원기둥의 부피: %.2lf\n", VOLUME(d64_radius, d64_height));
	return 0;
}