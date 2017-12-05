#include <stdio.h>
#include <math.h>
#define len(x1, y1, x2, y2) sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
int main()
{
	int i, j;
	float c, minc;
	float x[] = {1.1, 3.2, -2.5, 5.67, 3.42, -4.5, 2.54, 5.6, 0.97, 4.65};
	float y[] = {-6, 4.3, 4.5, 3.67, 2.42, 2.54, 5.6, -0.97, 4.65, -3.33};
	minc = len(x[0], y[0], x[1], y[1]);
	for(i = 0; i < 9; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			if(x == 0 && j == 1)
				continue;
			c = len(x[i], y[i], x[j], y[j]);
			if(c < minc)
				minc = c;
		}
	}
	printf("%.3f", minc);
	return 0;
}
