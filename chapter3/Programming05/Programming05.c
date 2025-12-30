#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0.0;
	double y = 0.0;

	printf("실수를 입력하시오: ");
	scanf(" %lf", &x);

	y = 3 * x * x + 7 * x + 11;

	printf("다항식의 값은 %.2lf\n", y);

	return 0;
}