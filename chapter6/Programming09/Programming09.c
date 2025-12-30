#include <stdio.h>

int main(void)
{
	double x = 0.0;
	double y = 0.0;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x <= 0.0)
		y = x * x - 9 * x + 2;
	else
		y = 7 * x + 2;
		
	printf("f(x)의 값은 %.2lf입니다.\n", y);

	return 0;
}
