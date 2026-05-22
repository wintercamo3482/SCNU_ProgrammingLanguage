#include <stdio.h>
#include <stdlib.h>

#define STR_MAX     100

int main(void)
{
    FILE* fp;
    char* pc8_str;
    
    char ac8_fileName[] = "sample.txt";

    pc8_str = (char*)malloc(sizeof(char) * STR_MAX);
    
    fp = fopen(ac8_fileName, "w");

    if (pc8_str == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    if (fp == NULL)
    {
        printf("[ERROR] Failed to open file\n");
        free(pc8_str);
        return -1;
    }
    
    printf("문자열을 입력하시오: ");
    gets_s(pc8_str, STR_MAX);

    fputs(pc8_str, fp);

    printf("파일 %s로 저장되었습니다.\n", ac8_fileName);

    fclose(fp);
    free(pc8_str);
    
    return 0;
}