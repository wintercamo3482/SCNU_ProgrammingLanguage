// 반복을 이용한 세제곱값구하기
#include <stdio.h>

int main(void)
{
	int n;

	printf("정수를 입력하시요:");
	scanf("%d", &n);
	
	printf("=====================\n");
	printf("   i       i의 세제곱\n");
	printf("=====================\n");
	for (int i = 1; i <= n; i++)
		printf("%5d  %5d\n", i, i * i * i);

	return 0;
}