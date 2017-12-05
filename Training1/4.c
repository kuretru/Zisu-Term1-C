#include <stdio.h>
int main()
{
	int i, n;
	int a[10], x;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);
	for(i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			printf("%d: a[%d]", x, i);
			break;
		}
		if(i == n - 1)
			printf( "%d: not found\n", x);
	}
	return 0;
}
