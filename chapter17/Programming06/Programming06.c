#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct rec
{
    int32_t s32_i;
    float f32_PI;
    char c8_A;
} my_record;

int main(void)
{
    my_record* pst_record = NULL;

    pst_record = (my_record*)malloc(sizeof(my_record));

    if (pst_record == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    pst_record->s32_i = 10;
    pst_record->f32_PI = 3.14;
    pst_record->c8_A = 'a';

    printf("i = %d\n", pst_record->s32_i);
    printf("PI = %.2f\n", pst_record->f32_PI);
    printf("A = %c\n", pst_record->c8_A);

    free(pst_record);

    return 0;
}