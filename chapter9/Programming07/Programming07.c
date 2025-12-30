#include <stdio.h>

int power(int base, int power_raised)
{
	if (power_raised == 0)
		return 1;
	else
		return base * power(base, power_raised - 1);
}

int main(void)
{
	int i_inputBase = 0;
	int i_intputPower = 0;

	printf("¹Ø¼ö: ");
	scanf("%d", &i_inputBase);

	printf("Áö¼ö: ");
	scanf("%d", &i_intputPower);

	printf("%d^%d = %d\n", i_inputBase, i_intputPower, power(i_inputBase, i_intputPower));
	return 0;
}