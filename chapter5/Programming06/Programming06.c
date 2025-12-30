#include <stdio.h>
#include <math.h>

int main()
{
	double x = 1.0 - 0.9;
	double y = 0.1;
	
	printf("(1.0-0.9)==0.1 은 %d 입니다.\n", fabs(x - y) < 0.00001);

	return 0;
}
