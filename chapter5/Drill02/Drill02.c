#include <stdio.h>

int main(void)
{
	double x, y, result;

	printf("실수 2개를 입력하시오: ");
	scanf("%lf %lf", &x, &y);
	result = x + y;
	printf("%f + %f = %f \n", x, y, result);
	result = x - y;
	printf("%f - %f = %f \n", x, y, result);
	result = x * y;
	printf("%f * %f = %f \n", x, y, result);
	result = x / y;
	printf("%f / %f = %f \n", x, y, result);

	return 0;
}