#include <stdio.h>

int gi_currentMoney = 0;

void PrintMenu()
{
	printf("***************Welcome to Express ATM***************\n");
	printf("(1) 잔고 확인\n");
	printf("(2) 입금\n");
	printf("(3) 출금\n");
	printf("(4) 종료\n");
	printf("하나를 선택하시오: ");
}

void Balance(void)
{
	printf("현재 잔고는 %d입니다.\n", gi_currentMoney);
}

void Deposit(int i_depositMoney)
{
	gi_currentMoney += i_depositMoney;
	printf("새로운 잔고는 %d입니다.\n", gi_currentMoney);
}

void Withdraw(int i_withdrawMoney)
{
	if (i_withdrawMoney > gi_currentMoney)
	{
		gi_currentMoney = 0;
		printf("새로운 잔고는 %d입니다.\n", gi_currentMoney);
	}
	else
	{
		gi_currentMoney -= i_withdrawMoney;
		printf("새로운 잔고는 %d입니다.\n", gi_currentMoney);
	}
}

int main(void)
{
	int i_input = 0;
	int i_money = 0;

	do
	{
		PrintMenu();
		scanf("%d", &i_input);
		
		if (i_input == 4)
			break;
		
		switch (i_input)
		{
		case 1:
			Balance();
			break;

		case 2:
			printf("입금 금액: ");
			scanf("%d", &i_money);
			Deposit(i_money);
			break;

		case 3:
			printf("출금 금액: ");
			scanf("%d", &i_money);
			Withdraw(i_money);
			break;

		default:
			printf("다시 입력하세요\n");
			break;
		}

	} while (1);

	return 0;
}