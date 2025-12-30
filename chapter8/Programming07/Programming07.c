#include <stdio.h>

int round(double f)
{
	return (int)(f + 0.5);
}

int main(void)
{
	double d_input = 0.0;

	printf("실수를 입력하시오: ");
	scanf("%lf", &d_input);

	printf("반올림한 값은 %d입니다.\n", round(d_input));

	return 0;
}