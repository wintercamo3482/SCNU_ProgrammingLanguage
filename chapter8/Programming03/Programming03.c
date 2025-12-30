#include <stdio.h>

double get_bigger(double a, double b)
{
	return (a > b) ? a : b;
}

int main(void)
{
	double d_input1 = 0.0;
	double d_input2 = 0.0;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &d_input1, &d_input2);

	printf("큰 수는 %.1lf입니다.\n", get_bigger(d_input1, d_input2));
	return 0;
}