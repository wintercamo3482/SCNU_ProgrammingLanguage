#include <stdio.h>
#define PI 3.141592

int main()
{
	double radius;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	double surface_area = 4 * PI * radius * radius;

	printf("표면적은 %.2lf입니다.\n", surface_area);
	
	double volume = 4.0 / 3.0 * PI * radius * radius * radius;

	printf("체적은 %.2lf입니다.\n", volume);

	return 0;
}
