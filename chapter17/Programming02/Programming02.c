#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    int32_t s32_count = 0;
    float f32_sum = 0.0f;

    float* pf32_data;

    printf("실수의 개수: ");
    scanf("%d", &s32_count);

    pf32_data = (float*)malloc(sizeof(float) * s32_count);

    if (pf32_data == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
    {
        printf("실수를 입력하시오: ");
        scanf("%f", &pf32_data[s32_i]);
    }

    for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
    {
        f32_sum += pf32_data[s32_i];
    }
    printf("합은 %.1f입니다.\n", f32_sum);

    free(pf32_data);

    return 0;
}