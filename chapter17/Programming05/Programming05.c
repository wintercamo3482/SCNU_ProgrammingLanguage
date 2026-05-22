#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char* pc8_str;

    pc8_str = (char*)malloc(sizeof(char) * 20);

    if (pc8_str == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    strcpy(pc8_str, "hangookuniv");

    printf("문자열 = %s,  주소 = %p\n", pc8_str, pc8_str);
    
    pc8_str = (char*)realloc(pc8_str, 30);

    if (pc8_str == NULL)
    {
        printf("[ERROR] Failed to re-allocate memory\n");
        exit(1);
    }

    strcat(pc8_str, ".com");

    printf("문자열 = %s,  주소 = %p\n", pc8_str, pc8_str);

    free(pc8_str);

    return 0;
}