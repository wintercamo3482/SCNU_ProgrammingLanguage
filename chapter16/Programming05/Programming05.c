#include <stdio.h>
#include <stdint.h>

#define IS_SPACE(c)		((c) == '\t' || (c) == '\n' || (c) == ' ')

int main(void)
{
	char ac8_str[256];
	
	int32_t s32_count = 0;
	int32_t s32_i = 0;

	printf("문자열을 입력하시오: ");

	gets_s(ac8_str, sizeof(ac8_str));

	do
	{
		if (IS_SPACE(ac8_str[s32_i]))
		{
			s32_count++;
		}

		s32_i++;

	} while (ac8_str[s32_i] != '\0');

	printf("공백문자의 개수: %d\n", s32_count);

	return 0;
}