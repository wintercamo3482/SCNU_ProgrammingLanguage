#include <stdio.h>

int main(void)
{
	double front = 3.32e-3;
	double rear = 9.76e-8;

	double result = front + rear;

	printf("%lf\n", result);

	return 0;
}