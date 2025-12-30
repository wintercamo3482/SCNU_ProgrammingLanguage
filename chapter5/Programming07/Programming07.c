#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	int count;

	printf("2를 곱하고 싶은 횟수: ");
	scanf("%d", &count);

	printf("\n%d<<%d의 값: %d\n", num, count, num << count);
	return 0;
}
