#include <stdio.h>
#define STUDENTS 5

int main(void)
{
	int scores[STUDENTS];
	int i, sum = 0;
	double average;

	for (i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);
	}
	
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = (double)sum / STUDENTS;
	printf("성적 평균= %.2f\n", average);

	return 0;
}