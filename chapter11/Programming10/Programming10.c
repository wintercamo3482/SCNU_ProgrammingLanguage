#include <stdio.h>
#include <stdint.h>

#define SIZE 10

void array_copy(int32_t* p_A, int32_t* p_B, int32_t s32_size)
{
    int32_t s32_i;

    for (s32_i = 0; s32_i < s32_size; s32_i++)
    {
        p_B[s32_i] = p_A[s32_i];
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
    int32_t as32_orig[SIZE] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
    int32_t as32_dest[SIZE];

    int32_t s32_size = sizeof(as32_orig) / sizeof(as32_orig[0]);

    printf("A[] = ");
    PrintArray(as32_orig, s32_size);
    printf("\n");

    array_copy(as32_orig, as32_dest, s32_size);

    printf("B[] = ");
    PrintArray(as32_dest, s32_size);
    printf("\n");

    return 0;
}