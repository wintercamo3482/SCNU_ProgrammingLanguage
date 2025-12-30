#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double base = 0.0;
	double height = 0.0;
	double area = 0.0;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%lf", &base);
	
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%lf", &height);

	area = 0.5 * height * base;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %.2lf", area);
	
	return 0;
}