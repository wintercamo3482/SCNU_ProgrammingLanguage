#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face()
{
	static unsigned int ui_count1 = 0;
	static unsigned int ui_count2 = 0;
	static unsigned int ui_count3 = 0;
	static unsigned int ui_count4 = 0;
	static unsigned int ui_count5 = 0;
	static unsigned int ui_count6 = 0;

	for (int i_idx = 0; i_idx < 100; i_idx++)
	{
		int i_face = rand() % 6 + 1;
		switch (i_face)
		{
		case 1:
			++ui_count1;
			break;
		case 2:
			++ui_count2;
			break;
		case 3:
			++ui_count3;
			break;
		case 4:
			++ui_count4;
			break;
		case 5:
			++ui_count5;
			break;
		case 6:
			++ui_count6;
			break;
		default:
			printf("[ERROR] Not valid number - %d\n", i_face);
			break;
		}
	}

	printf("1->%d\n", ui_count1);
	printf("2->%d\n", ui_count2);
	printf("3->%d\n", ui_count3);
	printf("4->%d\n", ui_count4);
	printf("5->%d\n", ui_count5);
	printf("6->%d\n", ui_count6);
}

int main(void)
{
	srand(time(NULL));

	get_dice_face();

	return 0;
}