#include <stdio.h>
#include <math.h>
int main()
{
	double x0, x1 = 0;
	do {
		x0 = x1;
		x1 = cos(x0);
	} while(fabs(x0 - x1) > 0.000001);
	printf("Root=%.6f", x0);
	return 0;
}
