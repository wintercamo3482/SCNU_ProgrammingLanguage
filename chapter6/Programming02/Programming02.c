#include <stdio.h>

int main(void)
{
	int x, y, z;
	int result = 0;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		result = y;
	else
		result = x;

	if (result > z)
		result = z;
	
	printf("제일 작은 정수는 %d입니다.\n", result);

	return 0;
}