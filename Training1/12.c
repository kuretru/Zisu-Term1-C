#include <stdio.h>
#include <math.h>
int main()
{
	double y = 1.05;
	int n = 1;
	while(1)
	{
		if(pow(y, n) < 1e6 && pow(y, n + 1) > 1e6)
		{
			printf("%d,%.0f", n, pow(y, n));
			break;
		}
		n++;
	}
	return 0;
}
