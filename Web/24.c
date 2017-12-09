#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k, groups;
	double a, b, c, d;
	double result[20][3], x, fx, last;
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		k = 0;
		last = -11000;
		for(j = -10000; j <= 10000; j++)
		{
			x = j * 1.00 / 100;
			fx = a * x * x * x + b * x * x  + c * x  + d;
			if(fabs(fx) <= 0.00000001 && fx - last >= 1)
				result[i][k++] = x;
			if(k > 2)
				break;
		}
	}
	for(i = 0; i < groups; i++)
		printf("%.2lf %.2lf %.2lf\n", result[i][0], result[i][1], result[i][2]);
	return 0;
}
