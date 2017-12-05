#include <stdio.h>
#include <math.h>
int main()
{
	int i, x, y, z;
	for(i = 123; i < 1000; i++)
	{
		x = i / 100;
		z = i % 10;
		y = (i - x * 100) / 10;
		if(x * x * x + y * y * y + z * z * z == i)
			printf("%5d", i);
	}
	return 0;
}
