#include <stdio.h>
#include <math.h>
int main()
{
	float s = 1, t = 1, i = 3;
	for(i = 3; fabs(1 / t) > 1e-5; i += 2)
	{
		t *= -1 * (i - 1) * i;
		s += 1 / t;
	}
	printf("%.2f", s);
	return 0;
}
