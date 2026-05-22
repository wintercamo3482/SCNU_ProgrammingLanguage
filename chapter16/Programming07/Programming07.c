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
	int32_t s32_direction = 0;
	int32_t s32_shift = 0;

	printf("정수값을 입력하시오: ");
	scanf("%d", &s32_input);

	do
	{
		printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오: ");
		scanf("%d", &s32_direction);

		if (s32_direction == 0 || s32_direction == 1)
		{
			break;
		}
		else
		{
			printf("[WARN] 잘못된 방향을 입력했습니다.\n");
		}
		
	} while (1);

	printf("이동시킬 거리: ");
	scanf("%d", &s32_shift);

	printf("이동 전: ");
	display_bit(s32_input);

	if (s32_direction == 0)
	{
		s32_input = s32_input << s32_shift;
	}
	else
	{
		s32_input = s32_input >> s32_shift;
	}

	printf("이동 후: ");
	display_bit(s32_input);
	
	return 0;
}