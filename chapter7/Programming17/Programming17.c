#include <stdio.h>

int main()
{
	char c_op;
	int i_n1 = 0;
	int i_n2 = 0;
	int i_result = 0;

	printf("*****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("*****************\n");
	
	do
	{
		printf("연산을 선택하시오:");
		scanf(" %c", &c_op);

		if (c_op == 'Q')
		{
			break;
		}

		if ((c_op != 'A') && (c_op != 'S') && (c_op != 'M') && (c_op != 'D'))
		{
			continue;
		}
		

		printf("두수를 공백으로 분리하여 입력하시오: ");
		scanf("%d %d", &i_n1, &i_n2);

		switch (c_op)
		{
		case 'A':
			i_result = i_n1 + i_n2;
			break;
		case 'S':
			i_result = i_n1 - i_n2;
			break;
		case 'M':
			i_result = i_n1 * i_n2;
			break;
		case 'D':
			i_result = i_n1 / i_n2;
			break;
		}

		printf("%d\n", i_result);

	} while (1);

	return 0;
}