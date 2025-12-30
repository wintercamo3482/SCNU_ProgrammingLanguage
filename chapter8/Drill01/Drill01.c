#include <stdio.h>

void print_starts()
{
	for (int i = 0; i < 30; i++)
		printf("*");
}
int main(void)
{
	print_starts();
	printf("\nHello World!\n");
	print_starts();
	return 0;
}