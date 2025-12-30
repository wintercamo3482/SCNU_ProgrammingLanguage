#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("카운터의 초기값을 입력하시오(단위: 초): ");
	scanf("%d", &num);
    
	for (int i = num; i > 0; i--)
	{
		printf("%d ", i);
		Sleep(1000);
	}
	printf("\a\n");

    return 0;
}