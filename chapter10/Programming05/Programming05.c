#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ 
	int ai_count[10] = { 0 };
	int i_randomNumber = 0;
	int i_maxNumber = 0;
	int i_mostFrequency = 0;

	srand(time(NULL));
	for (int i_idx = 0; i_idx < 100; i_idx++)
	{
		i_randomNumber = rand() % 10;
		ai_count[i_randomNumber]++;
	}
	
	for (int i_idx = 0; i_idx < 10; i_idx++)
		if (ai_count[i_idx] > i_maxNumber)
		{
			i_maxNumber = ai_count[i_idx];
			i_mostFrequency = i_idx;
		}
		
	printf("가장 많이 나온 수=%d\n", i_mostFrequency);

	return 0;
}