#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <Windows.h>

#define SIZE 64

int main(void)
{
	char ac_text[SIZE];
	char c_show;
	int32_t s32_pos = 0;
	int32_t s32_textLen = 0;

	printf("텍스트를 입력하시오: ");
	gets_s(ac_text, sizeof(ac_text));

	s32_textLen = (int32_t)strlen(ac_text);

	if (s32_textLen < SIZE - 1)
	{
		ac_text[s32_textLen] = ' ';
		ac_text[s32_textLen + 1] = '\0';
	}

	s32_textLen = (int32_t)strlen(ac_text);
	printf("\n");

	while (1)
	{
		printf("\r");

		for (int32_t s32_i = 0; s32_i < s32_textLen; s32_i++)
		{
			c_show = ac_text[(s32_pos + s32_i) % s32_textLen];
			putchar(c_show);
		}

		fflush(stdout);

		s32_pos = (s32_pos + 1) % s32_textLen;
		Sleep(200);
	}
	return 0;
}