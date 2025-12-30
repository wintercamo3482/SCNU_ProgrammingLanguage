#include <stdio.h>

int main()
{
	int x, y;

    printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("\n몫: %d\n나머지: %d\n", x / y, x % y);

    return 0;
}
