#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main(void)
{
	double d_x1 = 0.0;
	double d_x2 = 0.0;
	double d_y1 = 0.0;
	double d_y2 = 0.0;

	printf("첫 번째 점의 좌표를 입력하시오: ");
	scanf("%lf %lf", &d_x1, &d_y1);

	printf("두 번재 점의 좌표를 입력하시오: ");
	scanf("%lf %lf", &d_x2, &d_y2);

	printf("두 점 사이의 거리는 %lf입니다.\n", get_distance(d_x1, d_y1, d_x2, d_y2));

	return 0;
}