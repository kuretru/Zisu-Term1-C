#include <stdio.h>
#include <math.h>
int main()
{
	int i = 1;
	float x;
	double tmp = 1, result;
	scanf("%f", &x);
	result = 1;
	while(1)
	{
		tmp *= (-1) * (x * x) / ((i * 2 - 1) * i * 2);
		result += tmp;
		i++;
		if(fabs(tmp) < 1e-5)
			break;
	}
	printf("%.2f", result);
	return 0;
}
