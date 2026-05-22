#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    int32_t* ps32_int;
    short* ps32_short;
    float* pf32_float;

    ps32_int = (int32_t*)malloc(sizeof(int32_t));
    ps32_short = (short*)malloc(sizeof(short));
    pf32_float = (float*)malloc(sizeof(float));

    if (ps32_int == NULL || ps32_short == NULL || pf32_float == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    printf("정수(int형)을 입력하시오: ");
    scanf("%d", ps32_int);

    printf("정수(short형)을 입력하시오: ");
    scanf("%hd", ps32_short);

    printf("실수(float형)을 입력하시오: ");
    scanf("%f", pf32_float);

    printf("\n입력된 값은 %d, %hd, %.2f입니다.\n", *ps32_int, *ps32_short, *pf32_float);

    free(ps32_int);
    free(ps32_short);
    free(pf32_float);

    return 0;
}