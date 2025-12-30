#include <stdio.h>

int main()
{
	double d_n = 0.0;
	double d_result = 0.0;
	
	printf("항의 개수: ");
	scanf("%lf", &d_n);
	
	do
	{
		d_result += (1 / d_n);
		d_n -= 1.0;
	} while (d_n > 0);

	printf("수열의 합=%lf\n", d_result);

	return 0;
}