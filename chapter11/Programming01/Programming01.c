#include <stdio.h>
#include <stdint.h>

void get_frac(double f, int *pi, double *pd)
{
    printf("\nget_frac(%.2lf)이 호출되었습니다.\n", f);
    
    *pi = (int)f;
    *pd = f - *pi;
}

int main(void)
{
    double d_input = 0.0;
    int32_t s32_intPart = 0;
    double d_fracPart = 0.0;

    printf("실수를 입력하시오: ");
    scanf("%lf", &d_input);
    
    get_frac(d_input, &s32_intPart, &d_fracPart);

    printf("정수부는 %d입니다.\n", s32_intPart);
    printf("소수부는 %.2lf입니다.\n", d_fracPart);

    return 0;
}