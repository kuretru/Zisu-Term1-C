#include <stdio.h>
int main()
{
	int i, a, n;
	int t = 0;
	int s = 0;
	scanf("%d %d", &a, &n);
	for(i = 1; i <= n; i++)
	{
		t = t * 10 + a;
		s += t;
	}
	printf("%d", s);
	return 0;
}
