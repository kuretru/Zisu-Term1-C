#include <stdio.h>

int main()
{
	int i;
	int groups;
	int a, n, m, x;//第一站上a人,n个站,最后一站下m人,求x站
	int data[100] = {0, 1};
	int y, y1, y2;
	int result;
	for(i = 2; i < 100; i++)
		data[i] = data[i - 2] + data[i - 1];
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		result = -1;
		scanf("%d %d %d %d", &a, &n, &m, &x);
		if(x > 0 && n > 0 && x < n)
		{
			y1 = m - a - data[n - 3] * a;
			y2 = data[n - 2] - 1;
			if(x == 1)
				result = a;
			if(y2 == 0)
			{
				if(n == 4 && m != a * 2)
					result = -1;
				else if(n <= 3 && m != a)
					result = -1;
				else if(x > 1 && x < n)
				{
					result = (x - 1) * a;
				}
			}
			else if(y1 % y2 == 0)
			{
				if(x > 1 && x < n)
				{
					y = y1 / y2;
					result = (data[x - 2] + 1) * a + (data[x - 1] - 1) * y;
				}
			}
			else
				result = -1;
		}
		if(result != -1)
			printf("%d\n", result);
		else
			printf("No answer.\n");
	}
	return 0;
}
