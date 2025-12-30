#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random()
{
    static int i_inited = 0;

        if (0 == i_inited)
        {
            srand(time(NULL));
            printf("초기화 실행\n");
            i_inited = 1;
        }
        return rand();
}

int main(void)
{
    printf("%d\n", get_random());
    printf("%d\n", get_random());
    printf("%d\n", get_random());
    return 0;
}