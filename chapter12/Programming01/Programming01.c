#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 20

int main(void)
{
    char ac_input[SIZE];
    
    printf("문자열을 입력하시오: ");
    scanf("%s", ac_input);

    printf("역순 문자열: ");

    for (int32_t s32_i = strlen(ac_input) - 1; s32_i >= 0; s32_i--)
    {
        printf("%c", ac_input[s32_i]);
    }
    printf("\n");

    return 0;
}