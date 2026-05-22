#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp_src1;
	FILE* fp_src2;
	FILE* fp_dst;

	int32_t s32_ch;

	if (4 != argc)
	{
		printf("[ERROR] Usage: Programming07 file1 file2 file3\n");
		return -1;
	}

	fp_src1 = fopen(argv[1], "r");
	fp_src2 = fopen(argv[2], "r");
	fp_dst = fopen(argv[3], "w");

	if (fp_src1 == NULL || fp_src2 == NULL)
	{
		fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
		exit(1);
	}

	while ((s32_ch = fgetc(fp_src1)) != EOF)
	{
		fputc(s32_ch, fp_dst);
	}

	while ((s32_ch = fgetc(fp_src2)) != EOF)
	{
		fputc(s32_ch, fp_dst);
	}
	
	printf("%s 파일과 %s 파일을 합하여 %s 파일로 저장합니다.\n", argv[1], argv[2], argv[3]);

	fclose(fp_src1);
	fclose(fp_src2);
	fclose(fp_dst);

	return 0;
}