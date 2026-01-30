#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 16

void ShffleTarget(char ac_orig[], char ac_dest[])
{
	int32_t s32_len = strlen(ac_orig);
	int32_t s32_pos1 = 0;
	int32_t s32_pos2 = 0;

	char c_temp;

	strcpy(ac_dest, ac_orig);

	for (int32_t s32_i = 0; s32_i < s32_len; s32_i++)
	{
		s32_pos1 = rand() % s32_len;
		s32_pos2 = rand() % s32_len;

		c_temp = ac_dest[s32_pos1];
		ac_dest[s32_pos1] = ac_dest[s32_pos2];
		ac_dest[s32_pos2] = c_temp;
	}
}

int main(void)
{
	srand((unsigned)time(NULL));

	char ac_answer[SIZE] = "apple";
	char ac_guess[SIZE];
	char ac_hint[SIZE];

	ShffleTarget(ac_answer, ac_hint);

	do
	{
		printf("%s의 원래단어를 맞춰보세요: ", ac_hint);
		gets_s(ac_guess, sizeof(ac_guess));
	
	} while (strcmp(ac_guess, ac_answer) != 0);
	
	printf("축하합니다.\n");

	return 0;
}