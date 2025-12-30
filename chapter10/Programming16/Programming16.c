#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    char ac_board[SIZE][SIZE];
    char ac_display[SIZE][SIZE];
    int i_inputRow = 0;
    int i_inputCol = 0;
    int i_gameover = 0;

    srand((unsigned)time(NULL));

    for (int i_idx = 0; i_idx < SIZE; i_idx++)
    {
        for (int j_idx = 0; j_idx < SIZE; j_idx++)
        {
            ac_board[i_idx][j_idx] = (rand() % 100 < 30) ? '#' : '0';
            ac_display[i_idx][j_idx] = '.';
        }
    }

    do
    {
        system("cls");

        for (int i_idx = 0; i_idx < SIZE; i_idx++)
        {
            for (int j_idx = 0; j_idx < SIZE; j_idx++)
            {
                printf("%c ", ac_display[i_idx][j_idx]);
            }
            printf("\n");
        }

        printf("어떤 셀을 여시겠어요?(행번호, 열번호) ");
        scanf("%d %d", &i_inputRow, &i_inputCol);

        if (i_inputRow < 0 || i_inputRow >= SIZE || i_inputCol < 0 || i_inputCol >= SIZE)
            continue;
        
        else
        {
            if (ac_board[i_inputRow][i_inputCol] == '#')
            {
                ac_display[i_inputRow][i_inputCol] = '#';

                for (int i_idx = 0; i_idx < SIZE; i_idx++)
                {
                    for (int j_idx = 0; j_idx < SIZE; j_idx++)
                    {
                        printf("%c ", ac_display[i_idx][j_idx]);
                    }
                    printf("\n");
                }

                i_gameover = 1;
            }
            else
            {
                ac_display[i_inputRow][i_inputCol] = '*';

                system("cls");

                for (int i_idx = 0; i_idx < SIZE; i_idx++)
                {
                    for (int j_idx = 0; j_idx < SIZE; j_idx++)
                    {
                        printf("%c ", ac_display[i_idx][j_idx]);
                    }
                    printf("\n");
                }
            }

        }
    } while (!i_gameover);
    
    printf("지뢰입니다.\n");
    printf("종료합니다.\n");

    return 0;
}