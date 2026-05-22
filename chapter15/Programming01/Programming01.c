#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	uint32_t u32_line = 1;
	
	char ac8_file[] = "proverbs.txt";
	char ac8_line[256];

	fp = fopen(ac8_file, "r");

	if (fp == NULL)
	{
		fprintf(stderr, "[ERROR] 파일 %s을 열 수 없습니다.\n", ac8_file);
		exit(1);
	}

	while (fgets(ac8_line, sizeof(ac8_line), fp) != NULL)
	{
		printf("%u: %s", u32_line++, ac8_line);
	}

	fclose(fp);

	return 0;
}