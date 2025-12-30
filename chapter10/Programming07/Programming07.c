#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
    int ai_table[ROWS][COLS] = { { 12,56,32,16,98 },
                                 { 99,56,34,41, 3 },
                                 { 65, 3,87,78,21 } };

    int ai_rowSum[ROWS] = { 0 };
    int ai_colSum[COLS] = { 0 };

    for (int i_idx = 0; i_idx < ROWS; i_idx++)
    {
        for (int j_idx = 0; j_idx < COLS; j_idx++)
        {
            ai_rowSum[i_idx] += ai_table[i_idx][j_idx];
            ai_colSum[j_idx] += ai_table[i_idx][j_idx];
        }
    }

    for (int i_idx = 0; i_idx < ROWS; i_idx++)
        printf("%d행의 합계: %d\n", i_idx, ai_rowSum[i_idx]);

    for (int i_idx = 0; i_idx < COLS; i_idx++)
        printf("%d열의 합계: %d\n", i_idx, ai_colSum[i_idx]);
    
    return 0;
}