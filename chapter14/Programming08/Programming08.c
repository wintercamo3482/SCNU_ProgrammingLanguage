#include <stdio.h>
#include <stdint.h>
#include <string.h>

void sort_strings(char* ac8_list[], int32_t s32_size)
{
	int32_t s32_least = 0;
	char* pc8_temp;

	for (int32_t s32_i = 0; s32_i < s32_size - 1; s32_i++)
	{
		s32_least = s32_i;
		
		for (int32_t s32_j = s32_i + 1; s32_j < s32_size; s32_j++)
		{
			if (strcmp(ac8_list[s32_j], ac8_list[s32_least]) < 0)
			{
				s32_least = s32_j;
			}
		}

		pc8_temp = ac8_list[s32_i];
		ac8_list[s32_i] = ac8_list[s32_least];
		ac8_list[s32_least] = pc8_temp;
	}
}

int main(void)
{
	char* ac8_s[] =
	{
		"mycopy",
		"src",
		"dst"
	};
	
	int32_t s32_size = sizeof(ac8_s) / sizeof(ac8_s[0]);

	sort_strings(ac8_s, s32_size);

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		printf("%s\n", ac8_s[s32_i]);
	}

	return 0;
}