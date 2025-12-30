#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void array_fill(int A[], int size)
{ 
    int32_t s32_i = 0;

    for (s32_i = 0; s32_i < size; s32_i++)
    { 
        A[s32_i] = rand();
    }
}

int main(void)
{
    int32_t as32_array[SIZE];

    srand((unsigned int)time(NULL));

    array_fill(as32_array, SIZE);

    for (int32_t s32_i = 0; s32_i < SIZE; s32_i++)
    {
        printf("%d ", as32_array[s32_i]);
    }

    printf("\n");

    return 0;
}