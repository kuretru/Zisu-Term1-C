#include <stdio.h>
#define N 10
int main()
{
	int a[N] = {3, 5, 2, 4, 7, 8, 1, 9, 0, 6};
	int i, j, temp;
	for(i = 0, j = N - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for(i = 0; i < N; i++)
		printf("%d ", a[i]);
	return 0;
}
