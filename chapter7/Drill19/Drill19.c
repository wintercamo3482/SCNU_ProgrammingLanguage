#include <stdio.h>

int main(void)
{
	int x, y;

	for(y = 1; y < 10000; y++)		// 중첩 루프
	{
		for(x = 1; x < 10; x++)
		{
			if (_kbhit())	// 키가 눌려지면 OUT으로 점프
				goto OUT;
			printf("*");
		}
		printf("\n");
	}
OUT:
    return 0;
}