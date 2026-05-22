#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int32_t* ps32_data;
    
    int32_t s32_max = 0;

    srand((unsigned)time(NULL));

    ps32_data = (int32_t*)malloc(sizeof(int32_t) * 100);
    
    if (ps32_data == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    for (int32_t s32_i = 0; s32_i < 100; s32_i++)
    {
        ps32_data[s32_i] = rand() % 100;
    }

    for (int32_t s32_i = 0; s32_i < 100; s32_i++)
    {
        if (ps32_data[s32_i] > s32_max)
        {
            s32_max = ps32_data[s32_i];
        }
    }
    
    printf("난수 중에서 최대 값은 %d입니다.\n", s32_max);

    free(ps32_data);

    return 0;
}