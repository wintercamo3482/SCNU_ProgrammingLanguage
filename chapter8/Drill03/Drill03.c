#include <stdio.h>
double c_to_f(double c_temp);

int main(void)
{
    printf("섭씨 %.1f도는 화씨 %.1f도입니다. \n", 36.0, c_to_f(36.0));
    return 0;
}

double c_to_f(double c_temp)
{
    return 9.0 / 5.0 * c_temp + 32;
}