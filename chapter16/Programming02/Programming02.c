#include <stdio.h>
#include <stdint.h>

#define GET_MIN(x, y, z)	(((x) < (y)) ?	\
							(((x) < (z)) ? (x) : (z)) :	\
							(((y) < (z)) ? (y) : (z)))
int main()
{
	int32_t s32_x = 0;
	int32_t s32_y = 0;
	int32_t s32_z = 0;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &s32_x, &s32_y, &s32_z);
	
	printf("최소값은 %d입니다.\n", GET_MIN(s32_x, s32_y, s32_z));

	return 0;
}