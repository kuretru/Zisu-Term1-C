#include <stdio.h>
int main()
{
	int i;
	float a[10] = {7.23, 1.5, 5.24, 2.1, 2.45, 6.3, 5, 3.2, 0.7, 9.81};
	float sum = 0, v = 0;
	for(i = 0; i < 10; i++)
		v += a[i];
	v /= 10;
	for(i = 0; i < 10; i++)
	{
		if(a[i] >= v)
			sum += a[i];
	}
	printf("%.2f", sum);
	return 0;
}
