#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_NAME	16
#define MAX_SCORE	4.5
#define MAX_STUDENT	5

struct student
{
	char ac_name[MAX_NAME];
	uint32_t u32_number;
	double u32_score;
};

int main(void)
{
	static struct student ast_students[MAX_STUDENT] =
	{
		{ "강 아무개", 20170003, 4.17 },
		{ "김 아무개", 20190002, 3.39 },
		{ "이 아무개", 20200004, 2.31 },
		{ "홍길동",    20230001, 4.2  },
		{ "한 아무개", 20250016, 1.79 }
	};

	struct student st_superiorStudent = ast_students[0];

	for (uint32_t u32_i = 1; u32_i < MAX_STUDENT; u32_i++)
	{
		if (st_superiorStudent.u32_score < ast_students[u32_i].u32_score)
		{
			st_superiorStudent = ast_students[u32_i];
		}
	}

	printf("평점이 가장 높은 학생은 (이름: %s, 학번: %u, 평점: %.2lf)입니다.\n", st_superiorStudent.ac_name, st_superiorStudent.u32_number, st_superiorStudent.u32_score);

	return 0;
}