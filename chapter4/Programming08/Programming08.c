#include <stdio.h>

int main(void)
{
	int i;

	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &i);

	printf("문자:%c입니다.\n", i);

	return 0;
}