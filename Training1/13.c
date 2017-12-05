#include <stdio.h>
int main()
{
	int m = 0, t = 1, n;
	while(!( scanf("%d", &n) != EOF && n > 0 ));
	while(!(t <= n && t * 2 >= n))
	{
		t *= 2;
		m++;
	}
	printf("%d", m);
	return 0;
}
