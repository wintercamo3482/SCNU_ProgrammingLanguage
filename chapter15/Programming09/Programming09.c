#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp_src;
	FILE* fp_dst;
	
	char ac8_src[] = "src.txt";
	char ac8_dst[] = "dst.txt";

	char ac8_oldWord[64] = "Android";
	char ac8_newWord[64] = "\xEC\x95\x88\xEB\x93\x9C\xEB\xA1\x9C\xEC\x9D\xB4\xEB\x93\x9C";

	char ac8_line[256];
	char* pc8_position;

	fp_src = fopen(ac8_src, "r");
	fp_dst = fopen(ac8_dst, "wb");

	if (fp_src == NULL || fp_dst == NULL)
	{
		fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
		exit(1);
	}

	fprintf(fp_dst, "\xEF\xBB\xBF");
	
	while (fgets(ac8_line, sizeof(ac8_line), fp_src) != NULL)
	{
		pc8_position = strstr(ac8_line, ac8_oldWord);
		
		if (pc8_position != NULL)
		{
			*pc8_position = '\0';

			fprintf(fp_dst, "%s", ac8_line);
			fprintf(fp_dst, "%s", ac8_newWord);
			fprintf(fp_dst, "%s", pc8_position + strlen(ac8_oldWord));
		}
		else
		{
			fputs(ac8_line, fp_dst);
		}
	}

	fclose(fp_src);
	fclose(fp_dst);

	return 0;
}