#include <stdio.h>
int main()
{
	int i;
	int a, b, n;
	int fn, fnn, fnnn;//fnn -> f(n-1),fnnn -> f(n-2)
	int data[64];
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
		i = 2;
		while(i < n)
		{
			if(data[0] == fnnn && data[1] == fnn)//找到了周期
			{
				if(i != 2)
				{
					fn = data[n % (i - 2) - 1];//i-2 -> cycle
					break;
				}
			}
			fn = (a * fnn + b * fnnn) % 7;
			fnnn = fnn;
			fnn = fn;
			data[i++] = fn;
			if(fnnn == 0 && fnn == 0) //处理2个都为0的极特殊情况
				break;
		}
		printf("%d\n", fn);
	}
	return 0;
}
