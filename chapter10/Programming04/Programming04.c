#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size)
{
	for (int i_idx = 0; i_idx < size; i_idx++)
		b[i_idx] = a[i_idx];
}

int main(void)
{
	int ai_a[SIZE] = { 1,2,3,0,0,0,0,0,0,0 };
	int ai_b[SIZE] = { 0 };

	for (int i_idx = 0; i_idx < SIZE; i_idx++)
		printf("%d ", ai_a[i_idx]);
	
	printf("\n");

	array_copy(ai_a, ai_b, SIZE);

	for (int i_idx = 0; i_idx < SIZE; i_idx++)
		printf("%d ", ai_b[i_idx]);

	printf("\n\n배열이 복사되었음\n");

	return 0;
}