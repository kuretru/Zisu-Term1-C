#include <stdio.h>
int main()
{
	int i;
	float result = 0;
	float a = 1, b = 2, tmp;
	for(i = 0; i < 40; i++)
	{
		result += b / a;
		tmp = b;
		b = a + b;
		a = tmp;
	}
	printf("%.3f", result);
	return 0;
}
