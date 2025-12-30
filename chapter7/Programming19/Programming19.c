#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i_points= 0;
	int i_inside_circle_num = 0;
	double d_x = 0.0;
	double d_y = 0.0;
	double d_result = 0.0;

	printf("반복 횟수: ");
	scanf("%d", &i_points);

	srand(time(NULL));

	for (int i = 0; i < i_points; i++)
	{
		d_x = (double)rand() / RAND_MAX * 2.0 - 1.0;
		d_y = (double)rand() / RAND_MAX * 2.0 - 1.0;

		if (d_x * d_x + d_y * d_y <= 1.0)
			i_inside_circle_num++;
	}

	d_result = 4.0 * i_inside_circle_num / i_points;
	printf("파이 = %lf\n", d_result);

	return 0;
}