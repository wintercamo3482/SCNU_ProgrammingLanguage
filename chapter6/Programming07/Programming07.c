#include <stdio.h>

int main(void)
{
	double weight = 0;
	double height = 0;
	double standard_weight = 0;

	printf("체중과 키를 입력하시오: ");
	scanf("%lf %lf", &height, &weight);

	standard_weight = (height - 100.0) * 0.9;

	if (weight > standard_weight * 1.1)
		printf("과체중입니다.\n");
	
	else if (weight < standard_weight * 0.9)
		printf("저체중입니다.\n");

	else
		printf("표준입니다.\n");

	return 0;
}