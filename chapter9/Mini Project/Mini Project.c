#include <stdio.h>

// 막대 from에 쌓여있는 n개의 원판을 막대 tmp를 사용하여 막대 to로 옮긴다.
void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	}
	else {
		// ① from의 맨 밑의 원판을 제외한 나머지 원판들을 tmp로 옮긴다.
		hanoi_tower(n - 1, from, to, tmp);
		
		// ② from에 있는 한 개의 원판을 to로 옮긴다.
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);

		// ③ tmp의 원판들을 to로 옮긴다.
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main(void)
{
	int i_input;
	printf("옮길 원판의 수를 입력하시오: ");
	scanf("%d", &i_input);

	hanoi_tower(i_input, 'A', 'B', 'C');

	return 0;
}