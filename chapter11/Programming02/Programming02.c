#include <stdio.h>
#include <stdint.h>

#define SIZE 3

int main(void)
{
    int32_t as32_array[SIZE];

    for (int32_t s32_i = 0; s32_i < SIZE; s32_i++)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &as32_array[s32_i]);
    }
    
    printf("====================\n");
    printf("주소\t\t값\n");
    printf("====================\n");

    for (int32_t s32_i = 0; s32_i < SIZE; s32_i++)
    {
        printf("%08X\t%02d\n", as32_array[s32_i], as32_array[s32_i]);
    }

    return 0;
}