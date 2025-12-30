#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int tmp = 0;

	printf("x=%d y=%d\n", x, y);
	
	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d\n", x, y);

	return 0;
}