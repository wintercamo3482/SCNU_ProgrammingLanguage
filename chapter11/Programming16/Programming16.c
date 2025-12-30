#include <stdio.h>
#include <stdint.h>

#define SIZE 4

void merge(int32_t* p_A, int32_t* p_B, int32_t* p_C, int32_t s32_size)
{
    int32_t s32_aIndex = 0;
    int32_t s32_bIndex = 0;
    int32_t s32_cIndex = 0;

    while (s32_aIndex < SIZE && s32_bIndex < SIZE)
    {
        if (p_A[s32_aIndex] <= p_B[s32_bIndex])
        {
            p_C[s32_cIndex++] = p_A[s32_aIndex++];
        }
        
        else
        {
            p_C[s32_cIndex++] = p_B[s32_bIndex++];
        }
    }

    while (s32_aIndex < SIZE)
    {
        p_C[s32_cIndex++] = p_A[s32_aIndex++];
    }

    while (s32_bIndex < SIZE)
    {
        p_C[s32_cIndex++] = p_B[s32_bIndex++];
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
    int32_t as32_A[SIZE] = { 2, 5, 7, 8 };
    int32_t as32_B[SIZE] = { 1, 3, 4, 6 };
    int32_t as32_C[SIZE * 2];

    printf("A[] = ");
    PrintArray(as32_A, SIZE);
    printf("\n");

    printf("B[] = ");
    PrintArray(as32_B, SIZE);
    printf("\n");

    merge(as32_A, as32_B, as32_C, SIZE * 2);

    printf("C[] = ");
    PrintArray(as32_C, SIZE * 2);
    printf("\n");

    return 0;
}