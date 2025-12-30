#include <stdio.h>
#define PI 3.14

int main(void)
{
	double distance = 0.0;
	double angle = 0.0;
	double radius = 0.0;

	printf("거리를 입력하시오: ");
	scanf("%lf", &distance);

	printf("각도를 입력하시오: ");
	scanf("%lf", &angle);

	radius = 360.0 / angle * distance / (2 * PI);
	printf("지구의 반지름은 %.2lf입니다.\n", radius);

	return 0;
}