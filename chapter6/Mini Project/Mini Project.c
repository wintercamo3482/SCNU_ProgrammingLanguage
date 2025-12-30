#include <stdio.h>

int main(void)
{
	int tax_base = 0;
	int tax_rate = 0;
	int progressive_deduction = 0;
	int calculated_tax_amount = 0;

	printf("과세 표준: ");
	scanf("%d", &tax_base);

	if (tax_base > 1000000000)
	{
		tax_rate = 45;
		progressive_deduction = 65400000;
	}
	else if (tax_base > 500000000)
	{
		tax_rate = 42;
		progressive_deduction = 35400000;
	}
	else if (tax_base > 300000000)
	{
		tax_rate = 40;
		progressive_deduction = 25400000;
	}
	else if (tax_base > 150000000)
	{
		tax_rate = 38;
		progressive_deduction = 19400000;
	}
	else if (tax_base > 88000000)
	{
		tax_rate = 35;
		progressive_deduction = 14900000;
	}
	else if (tax_base > 46000000)
	{
		tax_rate = 24;
		progressive_deduction = 5220000;
	}
	else if (tax_base > 12000000)
	{
		tax_rate = 15;
		progressive_deduction = 1080000;
	}
	else
	{
		tax_rate = 6;
		progressive_deduction = 0;
	}

	printf("\n소득세율: %d%\n", tax_rate);
	printf("(공제전)소득세: %d\n", tax_rate * tax_base);
	printf("누진공제액: %d\n", progressive_deduction);

	calculated_tax_amount = tax_base * tax_rate / 100 - progressive_deduction;

	printf("산출세액: %d\n", calculated_tax_amount);

	return 0;
}