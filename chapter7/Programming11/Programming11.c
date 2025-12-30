#include <stdio.h>
#define MAX_FUEL 500

int main()
{
	char c_do;
	int i_current_fuel =100;
	int i_do_fuel = 0;

	do
	{
		printf("현재 연료량: %d\n", i_current_fuel);

		if (i_current_fuel < 20)
			printf("(경고) 연료가 %d리터 미만입니다.\n", i_current_fuel);

		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf(" %c%d", &c_do, &i_do_fuel);

		switch (c_do)
		{
		case '+':
			i_current_fuel += i_do_fuel;

			if (i_current_fuel > MAX_FUEL)
				i_current_fuel = MAX_FUEL;

			break;

		case '-':
			i_current_fuel -= i_do_fuel;
			if (i_current_fuel < 0)
				i_current_fuel = 0;

			break;

		default:
			printf("다시 입력하시오\n");
			break;
		}
		
		printf("\n");
	} while (1);

	return 0;
}