#include <stdio.h>
#include <stdint.h>

#define SIZE 20

void RemoveChar(char ac_orig[], char ac_dest[], char c_target)
{
	int32_t s32_origIndex = 0;
	int32_t s32_destIndex = 0;
	
	while (ac_orig[s32_origIndex] != '\0')
	{
		if (ac_orig[s32_origIndex] != c_target)
		{
			ac_dest[s32_destIndex] = ac_orig[s32_origIndex];
			s32_destIndex++;
		}
		s32_origIndex++;
	}
	ac_dest[s32_destIndex] = '\0';
}

int main(void)
{
	char ac_orig[SIZE];
	char ac_dest[SIZE];
	char c_target;

	printf("문자열을 입력하시오: ");
	scanf("%s", ac_orig);

	printf("제거할 문자: ");
	scanf(" %c", &c_target);

	RemoveChar(ac_orig, ac_dest, c_target);

	printf("결과 문자열 = %s\n", ac_dest);

	return 0;
}