#include "add.h"

#include <stdio.h>

int main(void)
{
	int32_t s32_ret = add(10, 20);
	
	printf("합계=%d\n", s32_ret);

	return 0;
}