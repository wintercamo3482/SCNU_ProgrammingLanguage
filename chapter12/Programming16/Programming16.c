#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(void)
{
    char ac_src[SIZE];
    char ac_find[SIZE];
    char ac_replace[SIZE];
    char ac_dest[SIZE] = "";
    char* pc_token;

    printf("문자열을 입력하시오: ");
    gets_s(ac_src, sizeof(ac_src));

    printf("찾을 문자열: ");
    scanf(" %s", ac_find);

    printf("바꿀 문자열: ");
    scanf(" %s", ac_replace);

    pc_token = strtok(ac_src, " ");

    while (pc_token != NULL)
    {
        if (0 == strcmp(pc_token, ac_find))
        {
            strcat(ac_dest, ac_replace);
        }
        else
        {
            strcat(ac_dest, pc_token);
        }
        strcat(ac_dest, " ");
        pc_token = strtok(NULL, " ");
    }
    printf("수정된 문자열: %s\n", ac_dest);
    return 0;
}