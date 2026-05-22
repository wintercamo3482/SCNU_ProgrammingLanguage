#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void SubProgramming01()
{
	FILE* fp;
	char ac8_name[3];
	int32_t s32_num = 100;

	fp = fopen("phone.txt", "w");

	if (fp == NULL)
	{
		fprintf(stderr, "[ERROR] 파일 쓰기에 실패했습니다.\n");
		exit(1);
	}

	for (char c8_first = 'a'; c8_first <= 'z'; c8_first++)
	{
		for (char c8_second = 'a'; c8_second <= 'z'; c8_second++)
		{
			ac8_name[0] = c8_first;
			ac8_name[1] = c8_second;
			ac8_name[2] = '\0';

			fprintf(fp, "%s %d\n", ac8_name, s32_num++);
		}
	}

	fclose(fp);
}

void SubProgramming02()
{
	FILE* fp;

	char ac8_targetName[3];
	char ac8_name[3];

	int32_t s32_number = 0;
	int32_t s32_found = 0;

	fp = fopen("phone.txt", "r");

	if (fp == NULL)
	{
		fprintf(stderr, "[ERROR] 파일 쓰기에 실패했습니다.\n");
		exit(1);
	}

	printf("찾고자 하는 사람의 이름: ");
	scanf(" %s", ac8_targetName);
	
	while (fscanf(fp, "%s %d", ac8_name, &s32_number) == 2)
	{
		if (strcmp(ac8_targetName, ac8_name) == 0)
		{
			printf("%s의 전화번호는 %d입니다.\n", ac8_name, s32_number);
			s32_found = 1;
			break;
		}
	}

	if (!s32_found)
	{
		printf("[WARN] %s을 찾을 수 없습니다.\n", ac8_targetName);
	}
	fclose(fp);
}

int main(void)
{
	SubProgramming01();
	SubProgramming02();

	return 0;
}