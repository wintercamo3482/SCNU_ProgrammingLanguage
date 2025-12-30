#include <stdio.h>
#include <limits.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("x 좌표를 입력하시오: ");
	scanf("%d", &x);

	printf("y 좌표를 입력하시오: ");
	scanf("%d", &y);

	printf("\n");
	(x > 0 && y > 0) ? printf("1사분면입니다.\n") : printf("");
	(x < 0 && y > 0) ? printf("2사분면입니다.\n") : printf("");
	(x < 0 && y < 0) ? printf("3사분면입니다.\n") : printf("");;
	(x > 0 && y < 0) ? printf("4사분면입니다.\n") : printf("");

	return 0;
}