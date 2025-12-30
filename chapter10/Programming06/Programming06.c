#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

int main(void)
{
    int ai_check[MAX] = { 0 };
    int ai_lotto[6];
    int i_number = 0;
    int i_count = 0;

    srand((unsigned)time(NULL));

    do
    {
        i_number = rand() % 45 + 1;

        if (ai_check[i_number] == 0)
        {
            ai_check[i_number] = 1;
            ai_lotto[i_count] = i_number;
            i_count++;
        }

    } while (i_count < 6);
        
    printf("로또 번호는 다음과 같습니다.\n");
    
    for (int i_idx = 0; i_idx < 6; i_idx++)
        printf("%d ", ai_lotto[i_idx]);

    printf("\n");

    return 0;
}