#include <stdio.h>
#include <stdint.h>

#define PROVERB_COUNT	10

void set_proverb(char **pc_q, int32_t s32_n)
{
	static char* pac8_array[PROVERB_COUNT] =
	{
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A stitch in time saves nine.",
		"Actions speak louder than words.",
		"When in Rome, do as the Romans do.",
		"The early bird catches the worm.",
		"Better late than never.",
		"Don't count your chickens before they hatch."
	};

	if (s32_n >= 0 && s32_n < PROVERB_COUNT)
	{
		*pc_q = pac8_array[s32_n];
	}
	else
	{
		*pc_q = NULL;
	}
}

int main(void)
{
	char* pc8_s = NULL;
	int32_t s32_idx;

	printf("몇 번째 속담을 선택하시겠습니까? ");
	scanf(" %d", &s32_idx);

	set_proverb(&pc8_s, s32_idx);

	if (pc8_s != NULL)
	{
		printf("선택된 속담 = %s\n", pc8_s);
	}

	else
	{
		printf("[ERROR] 잘못된 번호를 입력했습니다.\n");
	}

	return 0;
}