#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num = 0;
	int user_digit1 = 0;
	int user_digit2 = 0;

	int solution = 0;
	int digit1 = 0;
	int digit2 = 0;

	srand(time(NULL));
	solution = rand() % 90 + 10;

	digit1 = solution / 10;
	digit2 = solution % 10;

	printf("복권 번호를 입력하시오(0에서 99사이): ");
	scanf("%d", &num);

	user_digit1 = num / 10;
	user_digit2 = num % 10;
	
	printf("당첨번호는 %d입니다.\n", solution);

	if (num == solution || (user_digit1 == digit2 && user_digit2 == digit1))
		printf("상금은 100만원입니다.\n");
	
	else if (user_digit1 == digit1 || user_digit1 == digit2 ||
			 user_digit2 == digit1 || user_digit2 == digit1)
			printf("상금은 50만원입니다.\n");
	
	else
		printf("상금은 없습니다.\n");

	return 0;
}