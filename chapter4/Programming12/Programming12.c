#include <stdio.h>

int main(void)
{
	int i = 255;
	printf("%d \n", i);

	printf("(1)\n");
	printf("%%o : %o\n", i);
	printf("%%x : %x\n\n", i);

	printf("(2)\n");

	i = -1;
	printf("%%x : %x\n\n", i);

	i = -2;
	printf("%%x : %x\n\n", i);

	i = -3;
	printf("%%x : %x\n\n", i);
	return 0;
}