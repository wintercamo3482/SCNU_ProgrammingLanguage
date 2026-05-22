#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE* fp_orig;
	FILE* fp_dest;
	
	int32_t s32_ch = 0;
	int32_t s32_chUpper = 0;

	char ac8_origName[256];
	char ac8_destName[256];

	printf("첫 번째 파일 이름: ");
	scanf(" %s", ac8_origName);

	printf("두 번째 파일 이름: ");
	scanf(" %s", ac8_destName);

	fp_orig = fopen(ac8_origName, "r");
	fp_dest = fopen(ac8_destName, "w");

	if (fp_orig == NULL)
	{
		fprintf(stderr, "[ERROR] 입력 파일 %s을 열 수 없습니다.\n", ac8_origName);
		exit(1);
	}

	if (fp_dest == NULL)
	{
		fprintf(stderr, "[ERROR] 출력 파일 %s을 열 수 없습니다.\n", ac8_destName);
		exit(1);
	}

	while ((s32_ch = fgetc(fp_orig)) != EOF)
	{
		s32_chUpper = toupper(s32_ch);
		fputc(s32_chUpper, fp_dest);
		printf("%c", s32_chUpper);
	}

	fclose(fp_orig);
	fclose(fp_dest);

	return 0;
}