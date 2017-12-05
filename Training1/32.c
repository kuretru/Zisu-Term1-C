#include <stdio.h>
#define N 10
int main()
{
	int i, j, min, temp;
	int a[N] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
	for(i = 0; i < N; i++)
		printf("%5d", a[i]);
	printf("\n");
	for(i = 0; i < N - 1; i++)
	{
		min = i;
		for(j = i + 1; j < N; j++)
			if(a[min] > a[j])
				min = j;
		temp = a[min]; a[min] = a[i]; a[i ] = temp;
	}
	for(i = 0; i < N; i++)
		printf("%5d", a[i]);
	return 0;
}
