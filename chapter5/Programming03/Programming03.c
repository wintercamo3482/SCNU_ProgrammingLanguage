#include <stdio.h>

int main()
{
	int x, y, z, max;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("최대값은 %d입니다.\n", max);

	return 0;
}
