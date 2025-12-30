#include <stdio.h>
#define PI 3.14159265358979323846

double cal_area(double radius)
{
	return PI * radius * radius;
}

int main(void)
{
	double d_input = 0.0;

	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &d_input);

	printf("원의 면적은 %.2lf입니다.\n", cal_area(d_input));

	return 0;
}