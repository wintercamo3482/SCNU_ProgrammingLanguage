#include <stdio.h>
#include <stdint.h>

void pr_str_array(char** ac8_dp, int32_t s32_n)
{
	for (int32_t s32_i = 0; s32_i < s32_n; s32_i++)
	{
		printf("%s\n", ac8_dp[s32_i]);
	}
}

int main(void)
{
	char* ac8_proverb[] =
	{
		"A bad shearer naver had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools."
	};
	
	int32_t s32_size = sizeof(ac8_proverb) / sizeof(ac8_proverb[0]);

	pr_str_array(ac8_proverb, s32_size);

	return 0;
}