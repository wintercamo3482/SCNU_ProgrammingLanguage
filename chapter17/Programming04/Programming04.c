#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    char* pc8_str;

    int32_t s32_length = 0;

    printf("문자열의 최대 길이를 입력하시오: ");
    scanf("%d", &s32_length);
    getchar();

    pc8_str = (char*)malloc(sizeof(char) * (s32_length + 1));

    if (pc8_str == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    printf("문자열을 입력하시오: ");
    gets_s(pc8_str, s32_length + 1);

    printf("\n입력된 문자열은 %s입니다.\n", pc8_str);

    free(pc8_str);

    return 0;
}