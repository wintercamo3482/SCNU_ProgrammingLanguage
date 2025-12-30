#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 20
#define COLS 10

void DisplayGame(char ac_array[ROWS][COLS])
{
    system("cls");

    for (int i_idx = 0; i_idx < ROWS; i_idx++)
    {
        for (int j_idx = 0; j_idx < COLS; j_idx++)
        {
            printf("%c ", ac_array[i_idx][j_idx]);
        }
        printf("\n");
    }
}

int MonsterMove(int i_coordinate, int i_max, int i_avoid)
{
    int i_monsterDirection = rand() % 3;
    int i_ret = i_coordinate;

    if (i_monsterDirection == 0)
    {
        if (i_coordinate > 0)
            i_ret = i_coordinate - 1;
    }
    else if (i_monsterDirection == 1)
    {
        if (i_coordinate < i_max - 1)
            i_ret = i_coordinate + 1;
    }

    if (i_ret == i_avoid)
        i_ret = i_coordinate;

    return i_ret;
}

int main(void)
{
    char ac_board[ROWS][COLS] = { 0 };
    char c_command;
    int i_playerX = 0;
    int i_playerY = 0;
    int i_goldX = 0;
    int i_goldY = 0;
    int i_monster1X = 0;
    int i_monster1Y = 0;
    int i_monster1Move = 0;
    int i_monster2X = 0;
    int i_monster2Y = 0;
    int i_monster2Move = 0;

    srand((unsigned)time(NULL));

    for (int i_idx = 0; i_idx < ROWS; i_idx++)
        for (int j_idx = 0; j_idx < COLS; j_idx++)
            ac_board[i_idx][j_idx] = '.';

    ac_board[i_playerY][i_playerX] = '#';

    do
    {
        i_goldX = rand() % COLS;
        i_goldY = rand() % ROWS;
    } while (i_goldX == i_playerX && i_goldY == i_playerY);
    
    ac_board[i_goldY][i_goldX] = 'G';

    do
    {
        i_monster1X = rand() % COLS;
        i_monster1Y = rand() % ROWS;
    } while (i_monster1X == i_goldX && i_monster1Y == i_goldY);

    ac_board[i_monster1Y][i_monster1X] = 'M';

    do
    {
        i_monster2X = rand() % COLS;
        i_monster2Y = rand() % ROWS;
    } while ((i_monster2X == i_goldX && i_monster2Y == i_goldY) ||
             (i_monster2X == i_playerX && i_monster2Y == i_playerY) ||
             (i_monster2X == i_monster1X && i_monster2Y == i_monster1Y));

    ac_board[i_monster2Y][i_monster2X] = 'M';
    
    do
    {
        if (i_playerX == i_goldX && i_playerY == i_goldY)
        {
            ac_board[i_playerY][i_playerX] = '#';
            DisplayGame(ac_board);
            printf("\n\n승리\n");
            break;
        }

        if ((i_playerX == i_monster1X && i_playerY == i_monster1Y) ||
            (i_playerX == i_monster2X && i_playerY == i_monster2Y))
        {
            DisplayGame(ac_board);
            printf("\n\n패배\n");
            break;
        }

        DisplayGame(ac_board);

        printf("왼쪽(a) 오른쪽(d) 위쪽(w) 아래쪽(s): ");
        c_command = _getch();

        ac_board[i_playerY][i_playerX] = '.';
        ac_board[i_monster1Y][i_monster1X] = '.';
        ac_board[i_monster2Y][i_monster2X] = '.';

        if (c_command == 'a' && i_playerX > 0)
            i_playerX--;

        else if (c_command == 'd' && i_playerX < COLS - 1)
            i_playerX++;

        else if (c_command == 'w' && i_playerY > 0)
            i_playerY--;
            
        else if (c_command == 's' && i_playerY < ROWS - 1)
            i_playerY++;

        i_monster1X = MonsterMove(i_monster1X, COLS, i_goldX);
        i_monster1Y = MonsterMove(i_monster1Y, ROWS, i_goldY);

        do
        {
            i_monster2X = MonsterMove(i_monster2X, COLS, i_goldX);
            i_monster2Y = MonsterMove(i_monster2Y, ROWS, i_goldY);

        } while (i_monster2X == i_monster1X && i_monster2Y == i_monster1Y);

        ac_board[i_playerY][i_playerX] = '#';
        ac_board[i_monster1Y][i_monster1X] = 'M';
        ac_board[i_monster2Y][i_monster2X] = 'M';

        if ((i_playerX == i_monster1X && i_playerY == i_monster1Y) ||
            (i_playerX == i_monster2X && i_playerY == i_monster2Y))
        {
            DisplayGame(ac_board);
            printf("\n\n패배\n");
            break;
        }

    } while (1);

    return 0;
}