#include <stdio.h>
float f(float, float *, int);
int main()
{
	float b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	printf("%.2f", f(1.7, b, 5));
	return 0;
}
float f(float x, float a[], int n )
{
	float y = a[0], t = 1;
	int i;
	for(i = 1; i < n; i++)
	{
		t = t * x;
		y += a[i] * t;
	}
	return y;
}
