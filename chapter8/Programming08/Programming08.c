#include <stdio.h>

int get_tax(int income)
{
	if (income <= 1000)
		return income * 0.08;
	else
		return get_tax(1000) + (income - 1000) * 0.1;
}

int main(void)
{
	int i_input;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &i_input);

	printf("소득세는 %d만원입니다.\n", get_tax(i_input));

	return 0;
}