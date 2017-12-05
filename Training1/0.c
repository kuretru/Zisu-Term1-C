#include <stdio.h>
int main()
{
	int i, repeat;
	float x;
	scanf("%d", &repeat);
	for(i = 0; i < repeat; i++)
	{
		scanf("%f", &x);
		printf("f(%.2f) = ", x);
		if(x != 0)
			printf("%.3f", 1.0 / x);
		else
			printf("%.3f", 0.0);
		printf("\n");
	}
	return 0;
}
