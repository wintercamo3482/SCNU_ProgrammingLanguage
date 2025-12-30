#include <stdio.h>
#include <math.h>

#define SIZE 10

int main(void)
{
    double ad_input[SIZE] = { 0.0 };
    double d_average = 0.0;
    double d_sumAverage = 0.0;
    double d_sigma = 0.0;
    double d_sumSigma = 0.0;

    for (int i_idx = 0; i_idx < SIZE; i_idx++)
    {
        printf("데이터를 입력하시오:");
        scanf("%lf", &ad_input[i_idx]);
        d_sumAverage += ad_input[i_idx];
    }
    
    d_average = d_sumAverage / SIZE;

    for (int i_idx = 0; i_idx < SIZE; i_idx++)
    {
        d_sumSigma += (ad_input[i_idx] - d_average) * (ad_input[i_idx] - d_average);
    }

    d_sumSigma /= SIZE;
    d_sumSigma = sqrt(d_sumSigma);

    printf("평균값은 %lf\n", d_average);
    printf("표준편차값은 %lf\n", d_sumSigma);

    return 0;
}