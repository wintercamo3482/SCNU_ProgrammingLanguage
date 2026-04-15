#include <stdio.h>
#include <string.h>

struct complex
{
	double real;
	double imag;
};

struct complex complex_add(struct complex c1, struct complex c2)
{
	struct complex st_ret;
	memset(&st_ret, 0, sizeof(st_ret));

	st_ret.real = c1.real + c2.real;
	st_ret.imag = c1.imag + c2.imag;

	return st_ret;
}

int main(void)
{
	struct complex st_c1 = { 1.0, 2.0 };
	struct complex st_c2 = { 2.0, 3.0 };
	struct complex st_result = complex_add(st_c1, st_c2);

	printf("%.2lf+%.2lfi\n", st_c1.real, st_c1.imag);
	printf("%.2lf+%.2lfi\n", st_c2.real, st_c2.imag);
	printf("%.2lf+%.2lfi\n", st_result.real, st_result.imag);

	return 0;
}