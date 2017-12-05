#include <stdio.h>
int main()
{
	int i, repeat;
	float x, result;
	scanf("%d", &repeat);
	for(i = 0; i < repeat; i++)
	{
		result = 0;
		scanf("%f", &x);
		if(x > 0)
		{
			if(x <= 15)
				result = 4 * x / 3;
			else
				result = 2.5 * x - 10.5;
		}
		printf("f(%.2f) = %.2f\n", x, result);
	}
	return 0;
}
