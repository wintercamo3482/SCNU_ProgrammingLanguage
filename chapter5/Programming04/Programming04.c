#include <stdio.h>

int main()
{
	int cm;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &cm);

	double total_inch = cm / 2.54;
	int feet = total_inch / 12;
	double rest_inch = total_inch - (feet * 12);

	printf("%dcm는 %d피트 %.2lf인치입니다.\n", cm, feet, rest_inch);

	return 0;
}
