#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 64

void RunLengthEncoding(const char ac_orig[])
{
	int32_t s32_count = 1;
	int32_t s32_len = strlen(ac_orig);

	for (int32_t s32_i = 0; s32_i < s32_len; s32_i++)
	{
		if (ac_orig[s32_i] == ac_orig[s32_i + 1])
		{
			s32_count++;
		}
		else
		{
			printf("%d%c", s32_count, ac_orig[s32_i]);
			s32_count =1;
		}
	}
	printf("\n");
}

int main()
{
	char ac_input[SIZE] = "CopyA this!";
	
	printf("문자열을 입력하시오: ");
	gets_s(ac_input, sizeof(ac_input));

	RunLengthEncoding(ac_input);

	return 0;
}