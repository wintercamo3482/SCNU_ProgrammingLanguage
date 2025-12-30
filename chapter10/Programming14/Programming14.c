#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define AREA 6
#define MASK 3

int main(void)
{
    int ai_contain[AREA][AREA] = { 0 };
    int ai_mask[3][3] = { 1 };
    int i_sumTemp = 0;
    int i_sumResult = 0;
    int i_maxRow = 0;
    int i_maxCol = 0;

    srand((unsigned)time(NULL));

    for (int i_idx = 0; i_idx < AREA; i_idx++)
    {
        for (int j_idx = 0; j_idx < AREA; j_idx++)
        {
            ai_contain[i_idx][j_idx] = rand() % 6;
            printf("%d ", ai_contain[i_idx][j_idx]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i_idx = 0; i_idx <= (AREA - MASK); i_idx++)
    {
        for (int j_idx = 0; j_idx <= (AREA - MASK); j_idx++)
        {
            i_sumTemp = 0;

            for (int k_idx = 0; k_idx < MASK; k_idx++)
            {
                for (int l_idx = 0; l_idx < MASK; l_idx++)
                {
                    i_sumTemp += ai_contain[i_idx + k_idx][j_idx + l_idx];
                }
            }
            
            if (i_sumTemp > i_sumResult)
            {
                i_sumResult = i_sumTemp;
                i_maxRow = i_idx;
                i_maxCol = j_idx;
            }
        }
    }

    printf("가장 매장량이 많은 구역의 매장량은 %d%d입니다.", i_maxRow, i_maxCol);

    return 0;
}