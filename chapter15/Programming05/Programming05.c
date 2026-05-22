#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;

    char ac8_fileName[256];
    int32_t s32_ch = 0;

    int32_t s32_charNum = 0;
    int32_t s32_wordNum = 0;
    
    int32_t s32_word = 0;

    printf("파일 이름: ");
    scanf(" %s", ac8_fileName);

    fp = fopen(ac8_fileName, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
        exit(1);
    }

    while ((s32_ch = fgetc(fp)) != EOF)
    {
        if (isprint(s32_ch))
        {
            s32_charNum++;
        }

        if (isspace(s32_ch))
        {
            s32_word = 0;

        }
        else
        {
            if (s32_word == 0)
            {
                s32_wordNum++;
                s32_word = 1;
            }
        }
    }

    fclose(fp);

    printf("문자의 개수는 %d\n", s32_charNum);
    printf("단어의 개수는 %d\n", s32_wordNum);

    return 0;
}