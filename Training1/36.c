#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, x1, y1;
	float z, z1;
	x1 = y1 = 0;
	z1 = 10 * cos(x1 - 4) + 5 * sin(y1 - 2);
	for(x = 1; x <= 10; x++)
	{
		for(y = 1; y <= 10; y++)
		{
			z = 10 * cos(x - 4) + 5 * sin(y - 2);
			if(z < z1)
			{
				x1 = x;
				y1 = y;
				z1 = z;
			}
		}
	}
	printf("%d,%d", x1, y1);
	return 0;
}
