#include <stdio.h>
#include <math.h>
int main()
{
	float s = 0, a = 81;
	int i;
	for(i = 0; i < 30; i++)
	{
		s += a;
		a = sqrt(a);
	}
	printf("%.3f", s);
	return 0;
}
