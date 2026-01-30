#include <stdio.h>
#include <stdint.h>

#define SIZE 16

int main(void)
{
	char ac_operate[SIZE];
	int32_t s32_num1;
	int32_t s32_num2;
	int32_t s32_result;

	printf("연산을 입력하시오: ");
	scanf(" %s %d %d", ac_operate, &s32_num1, &s32_num2);

	if (0 == strcmp(ac_operate, "add"))
	{
		s32_result = s32_num1 + s32_num2;
	}
	
	else if (0 == strcmp(ac_operate, "sub"))
	{
		s32_result = s32_num1 - s32_num2;
	}
	
	else if (0 == strcmp(ac_operate, "mul"))
	{
		s32_result = s32_num1 * s32_num2;
	}
	
	else if (0 == strcmp(ac_operate, "div"))
	{
		if (s32_num2 == 0)
		{
			printf("[ERROR] Cannot be divided with 0\n");
			return -1;
		}
		else
		{
			s32_result = s32_num1 / s32_num2;
		}
	}

	else
	{
		printf("[ERROR] Wrong operator\n");
		return -1;
	}

	printf("연산의 결과: %d\n", s32_result);

	return 0;
}