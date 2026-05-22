#include <stdio.h>

void memzero(void* ptr, size_t len) {	// 메모리를 0으로 초기화하는 사용자 정의 함수
	char* p = (char*)ptr;	// void* 포인터를 char*로 변환
	for (; len > 0; len--, p++)
		*p = 0;	// 각 바이트를 0으로 설정
}

int main(void) {
	char a[10];
	memzero(a, sizeof(a));	// char 배열 초기화

	int b[10];
	memzero(b, sizeof(b));	// int 배열 초기화

	double c[10];
	memzero(c, sizeof(c));	// double 배열 초기화

	printf("double 배열: ");	// double 배열 0으로 초기화 되었는지 확인하다.
	for (int i = 0; i < 10; i++) {
		printf("%f", c[i]);
	}
	return 0;
}