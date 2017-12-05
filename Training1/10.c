#include <stdio.h>
#include <math.h>
int main()
{
	float pi = 0, tmp = 1;
	int isPostive = 1;
	while(fabs(1.0 / tmp) > 1e-6)
	{
		pi += 1.0 / tmp * isPostive;
		isPostive = -isPostive;
		tmp += 2;
	}
	pi *= 4;
	printf("%.4f", pi);
	return 0;
}
