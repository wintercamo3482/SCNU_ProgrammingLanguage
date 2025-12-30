#include <stdio.h>

int main(void)
{
	int time = 0;
	int age = 0;
	int price = 0;

	printf("현재 시간과 나이를 입력하시오(시간 나이): ");
	scanf("%d %d", &time, &age);

	if (time >= 17)
		price = 10000;
	else
	{
		if (age >= 65 || age <= 12)
			price = 25000;
		else
			price = 34000;
	}

	printf("요금은 %d원 입니다.\n", price);

	return 0;
}