#include <stdio.h>
int main()
{
	int i;
	int count = 0, result[10] = {0}, data[100];
	while(1)
	{
		int a, b, n;
		scanf("%d %d %d", &a, &b, &n);
		if(a == 0 && b == 0 && n == 0)
			break;
		int fn, fnn = 1, fnnn = 1;
		data[0] = 1;
		data[1] = 1;
		i = 3;
		while(i <= n)
		{
			fn = (a * fnn + b * fnnn) % 7;
			data[i - 1] = fn;
			fnnn = fnn;
			fnn = fn;
			i++;
			if(data[0] == fnnn && data[1] == fnn)
			{
				fn = data[n % (i - 3) - 1];
				break;
			}
		}
		result[count] = fn;
		count++;
	}
	for(i = 0; i < count; i++)
		printf("%d\n", result[i]);
	return 0;
}
