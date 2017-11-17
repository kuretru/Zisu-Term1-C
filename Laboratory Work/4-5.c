#include <stdio.h>
int main()
{
	int i, sum;
	for(i = 100; i < 1000; i++)
	{
		int x, y, z;
		x = i / 100;
		y = (i - x * 100) / 10;
		z = i % 10;
		sum = x * x * x + y * y * y + z * z * z;
		if(sum == i)
			printf("%d\n", sum);
	}
	return 0;
}
