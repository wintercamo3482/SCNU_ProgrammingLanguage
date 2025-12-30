#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size)
{
	int i_ret = 1;

	do
	{
		for (int i_idx = 0; i_idx < size; i_idx++)
		{
			if (a[i_idx] != b[i_idx])
			{
				i_ret = 0;
				break;
			}
		}
	} while (0);
	
	return i_ret;
}

int main(void)
{
	int ai_a[SIZE] = { 1,2,3,0,0,0,0,0,0,0 };
	int ai_b[SIZE] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i_idx = 0; i_idx < SIZE; i_idx++)
		printf("%d ", ai_a[i_idx]);
	
	printf("\n");

	for (int i_idx = 0; i_idx < SIZE; i_idx++)
		printf("%d ", ai_b[i_idx]);
	printf("\n\n");

	if (array_equal(ai_a, ai_b, SIZE))
		printf("2개의 배열은 같음\n");
	else
		printf("2개의 배열은 다름\n");
	
	return 0;
}