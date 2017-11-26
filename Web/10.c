#include <stdio.h>
int main()
{
	int i;
	int low, cur, high, count, pow, num;
	int n, result[10] = {0};
	scanf("%d", &n);
	for(int i = 0; i < 10; i++)
	{
		num = n;
		pow = 1;
		count = 0;
		while(num / pow != 0)
		{
			low = num - (num / pow) * pow;
			cur = (num / pow) % 10;
			high = num / (pow * 10);
			if(cur < i)
				count += high * pow;
			else if(cur == i)
				count += high * pow + low + 1;
			else if(cur > i)
				count += (high + 1) * pow;
			if(i == 0)
				count -= pow;
			pow *= 10;
		}
		result[i] += count;
	}
	for(i = 0; i < 10; i++)
		printf("%d\n", result[i]);
	return 0;
}
