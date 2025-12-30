#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{
	int i_start = 10;
	int i_end = 90;

	return i_start + rand() % (i_end - i_start + 1);
}

int main(void)
{
	srand(time(NULL));

	for (int i_idx = 0; i_idx < 10; i_idx++)
		printf("%d ", randint());

	return 0;
}