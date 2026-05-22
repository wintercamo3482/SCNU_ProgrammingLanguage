#include <stdio.h>
#include <stdint.h>

#define TOGGLE_UP_LOW(ch) ((ch) ^ (0x20))

int main(void)
{
	char ac8_input[256];
	
	int32_t s32_i = 0;

	printf("문자열을 입력하시오: ");
	gets_s(ac8_input, sizeof(ac8_input));

	while (ac8_input[s32_i] != '\0')
	{
		if ((ac8_input[s32_i] >= 'A' && ac8_input[s32_i] <= 'Z') ||
			(ac8_input[s32_i] >= 'a' && ac8_input[s32_i] <= 'z'))
		{
			ac8_input[s32_i] = TOGGLE_UP_LOW(ac8_input[s32_i]);
		}
		s32_i++;
	}

	printf("결과 문자열: %s\n", ac8_input);

	return 0;
}