#include <stdio.h>

int main()
{
	int num = 5;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	for(int i = 0; i < num; i++)
	{
		for (int j = 1; j < (i + 2); j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}