#include <stdio.h>
int main()
{
	int n, i;
	float a = 1, b = 2, result = 0, t;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		result += b / a;
		t = b;
		b = b + a;
		a = t;
	}
	printf("%.2f", result);
	return 0;
}
