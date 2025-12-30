#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 20

void RemoveWhiteSpace(char ac_orig[], char ac_dest[])
{
	int32_t s32_origIndex = 0;
	int32_t s32_destIndex = 0;

	while (ac_orig[s32_origIndex] != '\0')
	{
		if (ac_orig[s32_origIndex] != ' ')
		{
			ac_dest[s32_destIndex] = ac_orig[s32_origIndex];
			s32_destIndex++;
		}
		s32_origIndex++;
	}
	ac_dest[s32_destIndex] = '\0';
}

int main(void)
{
	char ac_input[SIZE];
	char ac_result[SIZE];

	printf("문자열을 입력하시오: ");
	gets_s(ac_input, sizeof(ac_input));

	RemoveWhiteSpace(ac_input, ac_result);

	printf("공백 제거 문자열 = %s\n", ac_result);

	return 0;
}