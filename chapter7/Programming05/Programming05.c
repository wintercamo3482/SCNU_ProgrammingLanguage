#include <stdio.h>

int main()
{
	double r = 0.0;
	int n = 0;
	double result = 1.0;

	printf("실수의 값을 입력하시오: ");
	scanf("%lf", &r);
	
	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		result *= r;

	}
	
	printf("결과값은 %lf\n", result);

	return 0;
}