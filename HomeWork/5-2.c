#include <stdio.h>
#define N 3
int main()
{
	float a[N][N];
	int i, j;
	float sum = 0.0;
	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			scanf("%f", &a[i][j]);
	for(i = 0; i < N; i++)
		sum += a[i][i];
	printf("%.2f", sum);
	return 0;
}
