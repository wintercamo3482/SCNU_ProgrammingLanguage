#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	int ten = num / 10;

	printf("\n십의 자리: %d\n", ten);

	int one = num % 10;

	printf("일의 자리: %d\n", one);

	return 0;
}
