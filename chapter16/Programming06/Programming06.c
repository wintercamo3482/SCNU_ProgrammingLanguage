#include <stdio.h>
#include <stdint.h>

#define GET_BIT(n, pos)	(((n) >> (pos)) & 0x01)

void display_bit(int32_t s32_value)
{
	for (int32_t s32_i = 31; s32_i >= 0; s32_i--)
	{
		if (GET_BIT(s32_value, s32_i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}

int main(void)
{
	int32_t s32_input = 0;

	printf("정수값을 입력하시오: ");
	scanf(" %d", &s32_input);

	display_bit(s32_input);

	return 0;
}