#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp_src;
	FILE* fp_dst;
	
	int32_t s32_targetLine = 0;
	int32_t s32_currentLine = 0;

	char ac8_src[] = "proverbs.txt";
	char ac8_dst[] = "test.txt";

	char ac8_line[256];

	fp_src = fopen(ac8_src, "r");
	fp_dst = fopen(ac8_dst, "w");

	if (fp_src == NULL || fp_dst == NULL)
	{
		fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
		exit(1);
	}

	printf("삭제를 원하는 줄 번호: ");
	scanf("%d", &s32_targetLine);

	while (fgets(ac8_line, sizeof(ac8_line), fp_src) != NULL)
	{
		if (s32_currentLine != s32_targetLine)
		{
			fputs(ac8_line, fp_dst);
		}

		s32_currentLine++;
	}

	fclose(fp_src);
	fclose(fp_dst);

	printf("%s로 저장되었습니다.\n", ac8_dst);

	return 0;
}