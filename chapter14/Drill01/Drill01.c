// 이중 포인터 프로그램
#include <stdio.h>

int main(void)
{
	int i = 100;			// 정수 변수 선언
	int* p = &i;			// 포인터 P는 I를 가리킨다.
	int** q = &p;			// 이중 포인터 q는 p를 가리킨다.

	*p = 200;				// p를 통하여 i에 200 저장
	printf("i=%d\n", i);

	**q = 300;
	printf("i=%d\n", i);	// q를 통하여 i에 300 저장

	return 0;
}