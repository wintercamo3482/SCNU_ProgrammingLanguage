#include <math.h>
#include <stdio.h>


int main(void)
{
	double height, distance, tree_height, degrees, radians;

	printf("나무까지의 거리(단위: 미터): ");
	scanf("%lf", &distance);

	printf("측정자의 키(단위: 미터): ");
	scanf("%lf", &height);

	printf("각도(단위: 도): ");
	scanf("%lf", &degrees);

	radians = degrees * (3.141592 / 180.0);

	tree_height = tan(radians) * distance + height;
	printf("나무의 높이(단위: 미터): %lf \n", tree_height);

	return 0;
}