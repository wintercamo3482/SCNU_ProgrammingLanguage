#include <stdio.h>
#include <stdint.h>

#define MAX 3

struct st_food
{
	char ac_name[100];
	int32_t s32_calories;
};

int main(void)
{
	int32_t s32_totalCalories = 0;

	struct st_food ast_food[MAX] = {
		{ "foodA", 1000 },
		{ "foodB", 500 },
		{ "foodC", 600 }
	};

	for (int32_t s32_i = 0; s32_i < MAX; s32_i++)
	{
		s32_totalCalories += ast_food[s32_i].s32_calories;
	}

	printf("총 칼로리=%d\n", s32_totalCalories);

	return 0;
}