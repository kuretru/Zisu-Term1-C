#include <stdio.h>
int main()
{
	int i, j;
	int a, b, n;
	int fn, fnn, fnnn;//fnn -> f(n-1),fnnn -> f(n-2)
	int cycle, data[64];
	while(1)
	{
		scanf("%d %d %d", &a, &b, &n);
		if(a == 0 && b == 0 && n == 0)
			break;
		if(n < 3)
			fn = 1;
		fnnn = 1;
		fnn = 1;
		data[0] = 1;
		data[1] = 1;
		for(i = 2; i < n; i++)
		{
			fn = (a * fnn + b * fnnn) % 7;
			for(j = 0; j < i - 2; j++)
			{
				if(data[j] == fnnn && data[j + 1] == fnn) //找到了周期
				{
					cycle = (n - j) % (i - 2 - j) - 1 + j;//i-2-j -> cycle
					if((n - j) % (i - 2 - j) == 0)
						cycle += i - 2 - j;
					fn = data[cycle];
					i = n;     //跳出循环
					break;
				}
			}
			fnnn = fnn;
			fnn = fn;
			if(i != n)
				data[i] = fn;
			if(fnnn == 0 && fnn == 0) //处理2个都为0的情况
				break;
		}
		printf("%d\n", fn);
	}
	return 0;
}
