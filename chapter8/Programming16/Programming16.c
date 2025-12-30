#include <stdio.h>

void Balance(int i_money)
{
	printf("잔고는 %d입니다.\n", i_money);
}

int Deposit(int i_money, int i_deposit)
{
	return i_money + i_deposit;
}

int Withdraw(int i_money, int i_deposit)
{
	int i_ret = 0;

	if (i_deposit > i_money)
		return i_ret;
	else
		return i_money - i_deposit;
}

int main()
{
	int i_input = 0;
	int i_current_money = 0;

	printf("********** Welcome to Express ATM **********\n");

	do
	{
		printf("<1> 잔액\n");
		printf("<2> 입금\n");
		printf("<3> 출금\n");
		printf("<4> 종료\n");
		
		printf("메뉴를 선택하시오: ");
		scanf("%d", &i_input);

		if (i_input == 4)
			break;

		switch (i_input)
		{
		case 1:
			Balance(i_current_money);
			break;

		case 2:
			printf("입금 금액을 입력하시오: ");
			scanf("%d", &i_input);

			i_current_money = Deposit(i_current_money, i_input);
			Balance(i_current_money);

			break;

		case 3:
			printf("출금 금액을 입력하시오: ");
			scanf("%d", &i_input);

			i_current_money = Withdraw(i_current_money, i_input);
			Balance(i_current_money);
			break;
		
		default:
			printf("다시 입력하세요\n");
			break;
		}

	} while (1);

	return 0;
}