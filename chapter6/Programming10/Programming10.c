#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("x, y좌표를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면입니다.\n");

	else if (x < 0 && y > 0)
		printf("2사분면입니다.\n");

	else if (x < 0 && y < 0)
		printf("3사분면입니다.\n");
	
	else
		printf("4사분면입니다.\n");

	return 0;
}
