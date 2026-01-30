#include <stdio.h>
#include <stdint.h>

#define MAX_STR 20
#define MAX_LEN 80

int main(void)
{
	char ac_words[MAX_STR][MAX_LEN];
	char ac_temp[MAX_LEN];
	int32_t s32_wordsNum;

	printf("문자열의 개수: ");
	scanf("%d", &s32_wordsNum);

	for (int32_t s32_i = 0; s32_i < s32_wordsNum; ++s32_i)
	{
		printf("문자열을 입력하시오: ");
		scanf(" %s", ac_words[s32_i]);
	}

	for (int32_t s32_i = 0; s32_i < s32_wordsNum - 1; s32_i++)
	{
		for (int32_t s32_j = 0; s32_j < s32_wordsNum - 1; s32_j++)
		{
			if (strcmp(ac_words[s32_j], ac_words[s32_j + 1]) > 0)
			{
				strcpy(ac_temp, ac_words[s32_j]);
				strcpy(ac_words[s32_j], ac_words[s32_j + 1]);
				strcpy(ac_words[s32_j + 1], ac_temp);
			}
		}
	}
	
	printf("\n정렬된 문자열은 다음과 같습니다.\n");

	for (int32_t s32_i = 0; s32_i < s32_wordsNum; s32_i++)
	{
		printf("%s ", ac_words[s32_i]);
	}

	printf("\n");
	
	return 0;
}