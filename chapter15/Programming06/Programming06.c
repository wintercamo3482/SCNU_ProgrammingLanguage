#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;

    char ac8_fileName[256];
    char ac8_line[256];

    printf("파일 이름: ");
    scanf(" %s", ac8_fileName);

    fp = fopen(ac8_fileName, "w");

    if (fp == NULL)
    {
        fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
        exit(1);
    }

    getchar();  // 공백 제거

    while (fgets(ac8_line, sizeof(ac8_line), stdin) != NULL)
    {
        fputs(ac8_line, fp);
    }

    fclose(fp);

    return 0;
}