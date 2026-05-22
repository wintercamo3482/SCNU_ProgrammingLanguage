#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	FILE* fp_src;
	FILE* fp_dst;

	char ac8_srcName[256];
	char ac8_dstName[256];

	char ac8_line[256];
	char* pc8_dot;

	int32_t s32_ch = 0;
	int32_t s32_shift = 0;

	printf("파일 이름을 입력하시오: ");
	scanf(" %s", ac8_srcName);

	printf("이동 거리를 입력하시오: ");
	scanf(" %d", &s32_shift);
	
	strcpy(ac8_dstName, ac8_srcName);
	
	pc8_dot = strrchr(ac8_dstName, '.');

	if (pc8_dot != NULL)
	{
		*pc8_dot = '\0';
	}

	strcat(ac8_dstName, "_enc.txt");

	fp_src = fopen(ac8_srcName, "r");
	fp_dst = fopen(ac8_dstName, "w");

	if (fp_src == NULL || fp_dst == NULL)
	{
		fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
		exit(1);
	}

	while ((s32_ch = fgetc(fp_src)) != EOF)
	{
		if (isupper(s32_ch))
		{
			s32_ch = ((s32_ch - 'A' + s32_shift) % 26) + 'A';
		}
		else if (islower(s32_ch))
		{
			s32_ch = ((s32_ch - 'a' + s32_shift) % 26) + 'a';
		}

		fputc(s32_ch, fp_dst);
	}

	fclose(fp_src);
	fclose(fp_dst);

	return 0;
}