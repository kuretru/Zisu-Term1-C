#include <stdio.h>
int main()
{
	int i;
	int m, n;
	int tmp;
	int max;
	scanf("%d %d", &m, &n);
	if(m > n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}
	for(i = 1; i <= m; i++)
	{
		if(m % i == 0 && n % i == 0)
			max = i;
	}
	printf("%d %d", max, m * n / max);
	return 0;
}
