#include <stdio.h>
#include <math.h>

double a, b, c, d;

double f(double x)
{
	return a * x * x * x + b * x * x + c * x + d;
}

double findx(double x1, double x2)
{
	double mid;
	if(x2 - x1 <= 0.0001)
	{
		printf("%lf %lf", x1, x2);
		return x1;
	}
	mid = (x1 + x2) / 2;
	if(f(x1) * f(x2) <= 0)
		return findx(x1, mid);
	else
		return findx(mid, x2);
}

int main()
{
	int i, j, k, groups;
	double x1, x2;
	double result[20][3];
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		k = 0;
		for(j = -100; j < 100; j++)
		{
			x1 = j;
			x2 = j + 1;
			if(fabs(f(x1)) <= 0.000001)
				result[i][k++] = x1;
			else if(f(x1) * f(x2) < 0)
				result[i][k++] = findx(x1, x2);
			if(k > 2)
				break;
		}
	}
	for(i = 0; i < groups; i++)
		printf("%.2lf %.2lf %.2lf\n", result[i][0], result[i][1], result[i][2]);
	return 0;
}
