#include <stdio.h>

int main()
{
	int i, j, k, groups;
	float a, b, c, d;
	float result[20][3], x, fx;
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		scanf("%f %f %f %f", &a, &b, &c, &d);
		k = 0;
		for(j = -10000; j <= 10000; j++)
		{
			x = j * 1.00 / 100;
			fx = a * x * x * x + b * x * x  + c * x  + d;
			if(fx == 0)
				result[i][k++] = x;
			if(k > 2)
				break;
		}
	}
	for(i = 0; i < groups; i++)
		printf("%.2f %.2f %.2f\n", result[i][0], result[i][1], result[i][2]);
	return 0;
}
