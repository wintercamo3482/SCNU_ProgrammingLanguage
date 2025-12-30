#include <stdio.h>

int main(void)
{
	printf("\a");
	Sleep(3000);

	printf("화재가 발생하였습니다.\n");
	printf("\a");

	return 0;
}