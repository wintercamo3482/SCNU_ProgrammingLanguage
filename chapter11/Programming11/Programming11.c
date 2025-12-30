#include <stdio.h>
#include <stdint.h>

#define SIZE 10

void array_add(int32_t* p_A, int32_t* p_B, int32_t* p_C, int32_t s32_size)
{
    int32_t s32_i;

    for (s32_i = 0; s32_i < s32_size; s32_i++)
    {
        p_C[s32_i] = p_A[s32_i] + p_B[s32_i];
    }
}

void PrintArray(int32_t* p_array, int32_t s32_size)
{
    for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
    {
        printf("%d ", p_array[s32_i]);
    }
}

int main(void)
{
    int32_t as32_basic[SIZE] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int32_t as32_bonus[SIZE] = { 4, 5, 6, 0, 0, 0, 0, 0, 0, 0 };
    int32_t as32_result[SIZE];

    int32_t s32_size = sizeof(as32_basic) / sizeof(as32_basic[0]);

    array_add(as32_basic, as32_bonus, as32_result, s32_size);

    printf("A[] = ");
    PrintArray(as32_basic, s32_size);
    printf("\n");

    printf("B[] = ");
    PrintArray(as32_bonus, s32_size);
    printf("\n");

    printf("C[] = ");
    PrintArray(as32_result, s32_size);
    printf("\n");

    return 0;
}