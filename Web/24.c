#include <math.h>
#include <stdio.h>
int main()
{
	int groups;
	scanf("%d", &groups);
	while (groups--)
	{
		double a, b, c, d;
		double x, fx;
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		int count = 0;
		double last = -11000;
		for (int i = -10000; i <= 10000; i++)
		{
			x = i * 1.00 / 100;
			fx = a * x * x * x + b * x * x + c * x + d;
			if (fabs(fx) <= 0.00000001 && fx - last >= 1)
			{
				printf("%.2lf", x);
				count++;
				if (count < 3)
					printf(" ");
				else
					printf("\n");
			}
			if (count > 2)
				break;
		}
	}
	return 0;
}
