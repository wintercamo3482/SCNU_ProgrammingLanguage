#include <stdio.h>

int main()
{
	char a, b, c, d;
	unsigned int result = 0;

	printf("첫 번째 문자를 입력하시오: ");
	scanf("%c", &a);
	
	printf("두 번째 문자를 입력하시오: ");
	scanf(" %c", &b);
	
	printf("세 번째 문자를 입력하시오: ");
	scanf(" %c", &c);
	
	printf("네 번째 문자를 입력하시오: ");
	scanf(" %c", &d);

	result |= (unsigned int)a;
	result |= (unsigned int)b << 8;
	result |= (unsigned int)c << 16;
	result |= (unsigned int)d << 24;

	printf("결과값: %x\n", result);

	return 0;
}
