#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mile = 0.0;
	double meter = 0.0;
	
	printf("마일을 입력하시오: ");
	scanf(" %lf", &mile);

	meter = 1609.0 * mile;

	printf("%.1lf은 %.2lf미터입니다.\n", mile, meter);

	return 0;
}