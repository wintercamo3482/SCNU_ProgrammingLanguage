#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NAME		10
#define MAX_STUDENT		30
#define MIN_ID			1
#define MAX_ID			99
#define NAME_COUNT		sizeof(ac8_names) / sizeof(ac8_names[0])
#define MIN_SCORE		1.0
#define MAX_SCORE		4.5

const char* ac8_names[] =
{
	"성기훈", "조상우", "오일남", "강새벽", "장덕수",
	"한미녀", "황준호", "오영일", "이명기", "조현주",
	"김준희", "박정배", "박용식", "장금자", "박경석",
	"강대호", "김영미", "용궁선", "타노스", "남수",
	"박민수", "세미", "김영삼", "김윤태", "이승원",
	"김기민", "임정대", "강노을", "박영길", "최우석"
};

typedef struct
{
	int32_t s32_number;
	char ac8_name[MAX_NAME];
	double d64_score;
} student;

int32_t CompareAscending(const void* p_a, const void* p_b)
{
	int32_t s32_ret = -1;

	const student* st_a = (const student*)p_a;
	const student* st_b = (const student*)p_b;

	do
	{
		if (st_a->d64_score < st_b->d64_score)
		{
			s32_ret = 1;
			break;
		}

		else if (st_a->d64_score == st_b->d64_score)
		{
			s32_ret = 0;
			break;
		}

		else
		{
			break;
		}

	} while (0);

	return s32_ret;
}

int main(void)
{
	srand((unsigned int)time(NULL));

	student ast_students[MAX_STUDENT];
	
	int32_t s32_duplicateNumber = 0;
	int32_t s32_tempNumber = 0;

	int32_t s32_idxName = 0;
	int32_t s32_nameCount[NAME_COUNT] = { 0 };

	for (int32_t s32_i = 0; s32_i < MAX_STUDENT; s32_i++)
	{
		while (1)
		{
			s32_tempNumber = rand() % (MAX_ID - MIN_ID + 1) + MIN_ID;
			s32_duplicateNumber = 0;

			for (int32_t s32_j = 0; s32_j < s32_i; s32_j++)
			{
				if (ast_students[s32_j].s32_number == s32_tempNumber)
				{
					s32_duplicateNumber = 1;
					break;
				}
			}

			if (0 == s32_duplicateNumber)
			{
				ast_students[s32_i].s32_number = s32_tempNumber;
				break;
			}
		}

		s32_idxName = rand() % NAME_COUNT;
		
		s32_nameCount[s32_idxName]++;

		if (s32_nameCount[s32_idxName] == 1)
		{	
			snprintf(ast_students[s32_i].ac8_name, sizeof(ast_students[s32_i].ac8_name), "%s", ac8_names[s32_idxName]);
		}

		else
		{
			snprintf(ast_students[s32_i].ac8_name, sizeof(ast_students[s32_i].ac8_name), "%s%d", ac8_names[s32_idxName], s32_nameCount[s32_idxName]);
		}

		ast_students[s32_i].d64_score = ((double)rand() / RAND_MAX) * (MAX_SCORE - MIN_SCORE) + MIN_SCORE;
	}

	qsort(ast_students, MAX_STUDENT, sizeof(student), CompareAscending);

	printf("성적으로 정렬한 결과\n");

	for (int32_t s32_i = 0; s32_i < MAX_STUDENT; s32_i++)
	{
		printf("\t%2d %lf %s\n", ast_students[s32_i].s32_number, ast_students[s32_i].d64_score, ast_students[s32_i].ac8_name);
	}

	return 0;
}