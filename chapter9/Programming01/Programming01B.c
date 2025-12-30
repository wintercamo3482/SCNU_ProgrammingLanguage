#include <stdio.h>

unsigned int i_addCount = 0;
unsigned int i_subtractCount = 0;
unsigned int i_multiplyCount = 0;
unsigned int i_divideCount = 0;

int Add(int x, int y)
{
	printf("덧셈은 총 %d번 실행되었습니다.\n", ++i_addCount);
	return x + y;
}

int Subtract(int x, int y)
{
	printf("뺄셈은 총 %d번 실행되었습니다.\n", ++i_subtractCount);
	return x - y;
}

int Multiply(int x, int y)
{
	printf("곱셈은 총 %d번 실행되었습니다.\n", ++i_multiplyCount);
	return x * y;
}

int Divide(int x, int y)
{
	printf("나눗셈은 총 %d번 실행되었습니다.\n", ++i_divideCount);
	return x / y;
}

int main(void)
{
	int i_num1 = 0;
	int i_num2 = 0;
	int i_result = 0;
	char c_op;

	do
	{
		printf("연산을 입력하시오: ");
		scanf("%d%c%d", &i_num1, &c_op, &i_num2);

		switch (c_op)
		{
		case '+':
			i_result = Add(i_num1, i_num2);
			break;

		case '-':
			i_result = Subtract(i_num1, i_num2);
			break;
		case '*':
			i_result = Multiply(i_num1, i_num2);
			break;
		case '/':
			i_result = Divide(i_num1, i_num2);
			break;
		}

		printf("연산의 결과: %d\n", i_result);

	} while (1);


	return 0;
}