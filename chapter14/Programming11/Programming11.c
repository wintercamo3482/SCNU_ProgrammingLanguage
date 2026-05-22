#include <stdio.h>
#include <stdint.h>

#define WIDTH		10
#define HEIGHT		10

void PrintBoard(int32_t as32_board[][WIDTH])
{
	for (int32_t s32_i = 0; s32_i < WIDTH; s32_i++)
	{
		for (int32_t s32_j = 0; s32_j < WIDTH; s32_j++)
		{
			printf("%c ", as32_board[s32_i][s32_j] ? 'X' : '-');
		}
		printf("\n");
	}
}

void CopyBoard(int32_t as32_org[][WIDTH], int32_t as32_dst[][WIDTH])
{
	int32_t* ps32_org = &as32_org[0][0];
	int32_t* ps32_dst = &as32_dst[0][0];

	for (int32_t s32_i = 0; s32_i < WIDTH * HEIGHT; s32_i++)
	{
		*ps32_dst++ = *ps32_org++;
	}
}

int32_t NeighborsCount(int32_t as32_org[][WIDTH], int32_t s32_rows, int32_t s32_cols)
{
	int32_t* ps32_ptr = &as32_org[s32_rows][s32_cols];
	int32_t s32_neighers = 0;

	s32_neighers += *(ps32_ptr - WIDTH - 1);
	s32_neighers += *(ps32_ptr - WIDTH);
	s32_neighers += *(ps32_ptr - WIDTH + 1);

	s32_neighers += *(ps32_ptr - 1);
	s32_neighers += *(ps32_ptr + 1);

	s32_neighers += *(ps32_ptr + WIDTH - 1);
	s32_neighers += *(ps32_ptr + WIDTH);
	s32_neighers += *(ps32_ptr + WIDTH + 1);

	return s32_neighers;
}

void NextGeneration(int32_t as32_org[][WIDTH], int32_t as32_dst[][WIDTH])
{
	int32_t s32_neighbors = 0;

	for (int32_t s32_i = 0; s32_i < WIDTH; s32_i++)
	{
		for (int32_t s32_j = 0; s32_j < WIDTH; s32_j++)
		{
			as32_dst[s32_i][s32_j] = 0;
		}
	}

	for (int32_t s32_i = 1; s32_i < WIDTH - 1; s32_i++)
	{
		for (int32_t s32_j = 1; s32_j < WIDTH - 1; s32_j++)
		{
			s32_neighbors = NeighborsCount(as32_org, s32_i, s32_j);

			if (as32_org[s32_i][s32_j] == 1)
			{
				if (s32_neighbors == 2 || s32_neighbors == 3)
				{
					as32_dst[s32_i][s32_j] = 1;
				}

				else
				{
					as32_dst[s32_i][s32_j] = 0;
				}
			}

			else
			{
				if (s32_neighbors == 3)
				{
					as32_dst[s32_i][s32_j] = 1;
				}
				else
				{
					as32_dst[s32_i][s32_j] = 0;
				}
			}
		}
	}
}

int main(void)
{
	int32_t as32_present[WIDTH][WIDTH] = { 0 };
	int32_t as32_next[WIDTH][WIDTH] = { 0 };
	int32_t s32_gen = 0;

	char c8_command;

	as32_present[2][5] = 1;
	as32_present[3][5] = 1;
	as32_present[3][6] = 1;
	as32_present[4][4] = 1;
	as32_present[4][6] = 1;

	do
	{
		PrintBoard(as32_present);
	
		printf("generation %d\n", ++s32_gen);

		printf("종료하려면 q, 계속하려면 m: ");
		scanf(" %c", &c8_command);

		if (c8_command == 'q')
		{
			break;
		}

		else
		{
			NextGeneration(as32_present, as32_next);
			CopyBoard(as32_next, as32_present);
		}

	} while (1);

	return 0;
}