#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	double s = 0;
	for(i = 2; i <= 10; i++)
	{
		s += sqrt(i);
	}
	printf("%.10f", s);
	return 0;
}
