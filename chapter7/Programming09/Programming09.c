#include <stdio.h>

int main()
{
	int n1 = 0;
	int n2 = 0;
	int LCM = 0;

	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &n1, &n2);

	LCM = (n1 > n2) ? n1 : n2;
	
	do
	{
		if ((LCM % n1 == 0) && (LCM % n2 == 0))
			break;
		LCM++;
	} while (1);

	printf("\n최소공배수는 %d입니다.\n", LCM);

	return 0;
}