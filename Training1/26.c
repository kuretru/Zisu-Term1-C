#include <stdio.h>
#include <math.h>
int main()
{
	float x[10] = {7.23, -1.5, 5.24, 2.1, -12.45, 6.3, -5, 3.2, -0.7, 9.81};
	float d, v = 0;
	int i, k = 0;
	for(i = 0; i < 10; i++)
		v += x[i];
	v = v / 10;
	d = fabs(x[0] - v);
	for(i = 1; i < 10; i++)
	{
		if(fabs(x[i] - v) < d)
		{
			d = fabs(x[i] - v);
			k = i;
		}
	}
	printf("%.3f", x[k]);
	return 0;
}
