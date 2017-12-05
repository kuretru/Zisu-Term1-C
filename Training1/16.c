#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	float x = 1.279, t = 1, y = 0;
	float a[10] = {1.1, 3.2, -2.5, 5.67, 3.42, -4.5, 2.54, 5.6, 0.97, 4.65};
	for(i = 0; i < 10; i++)
	{
		if(i != 0)
			t *= x;
		y += a[i] * t;
	}
	printf("%.2f", y);
	return 0;
}
