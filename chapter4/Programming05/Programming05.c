#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	double pyeong, result;

	printf("평을 입력하세요: ");
	scanf("%lf", &pyeong);

	result = pyeong * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다.\n", result);

	return 0;
}