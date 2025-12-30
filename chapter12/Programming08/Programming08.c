#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 20

int main(void)
{
	char ac_input[SIZE];
	char c_seps[] = " ,\t\n";
	char* pc_token = NULL;
	int32_t s32_wordCount = 0;

	printf("문자열을 입력하시오: ");
	gets_s(ac_input, sizeof(ac_input));

	pc_token = strtok(ac_input, c_seps);

	while (pc_token != NULL)
	{
		s32_wordCount++;
		pc_token = strtok(NULL, c_seps);
	}

	printf("단어의 수는 %d입니다.\n", s32_wordCount);

	return 0;
}